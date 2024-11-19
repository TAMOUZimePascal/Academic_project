
static bool Connexion()
{
    QSqlDatabase Connexion = QSqlDatabase::addDatabase("QMYSQL");// select SGBD you use
    Connexion.setHostName("127.0.0.1"); // input the address of localhost or hostname
    Connexion.setUserName("root");// input user name
    Connexion.setDatabaseName("pharmastock"); // select the database name
    Connexion.setPort(3306); // choose the port
    if(Connexion.open())
    {
        return true;
    }else
    {
        return false;
    }
}

