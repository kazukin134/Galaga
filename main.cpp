//
// アプリ雛形
// ※ファイル分割対応版
//

//#include "lib/appEnv.hpp"
#include "Main.h"
#include "Enemy.h"
#include "EnemyManager.h"

AppEnv *app_env;

// 
// メインプログラム
// 
int main() {
  // アプリウインドウの準備
  app_env = new AppEnv(Window::WIDTH, Window::HEIGHT,
                 false, false);

 
 // CEnemy Enemy;
  CEnemyManager EnemyManager;
  while (1) {
    // アプリウインドウが閉じられたらプログラムを終了
    if (!app_env->isOpen()) return 0;
    
    // 描画準備
    app_env->setupDraw();

	EnemyManager.Main();
	//Enemy.Update();
	//Enemy.Draw();
	
   
     
    // 画面更新
    app_env->update();
  }
  delete app_env;
  // アプリ終了
}
