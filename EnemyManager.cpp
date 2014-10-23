#include "EnemyManager.h"

CEnemy *CEnemyManager::Enemy;


CEnemyManager::CEnemyManager()
{
	enemymanagercount = 0;
	Enemy = new CEnemy();
}

CEnemyManager::~CEnemyManager()
{
	delete Enemy;
}

void CEnemyManager::Update()
{
	//enemymanagercount++;
	//if (enemymanagercount == 20 || enemymanagercount == 40)
	//{

		CEnemyManager::Enemy->Update();
	
		
	//}
	

}

void CEnemyManager::Draw()
{
	//if (enemymanagercount == 20 || enemymanagercount == 40)
	//{
		CEnemyManager::Enemy->Draw();
		
	//}

}

void CEnemyManager::Main()
{
	Draw();
	Update();
}