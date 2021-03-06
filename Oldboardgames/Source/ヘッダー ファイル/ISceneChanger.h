#pragma once
typedef enum {
	eScene_Title,			//タイトル画面
	eScene_MancalaPvP,		//ゲーム画面
	eScene_MancalaCPU,		//CPU対戦画面
	eScene_MancalaOnline,	//オンライン対戦画面

	eScene_End,		//ゲーム終了

	eScene_None,    //無し
} eScene;

typedef enum {
	ePvP,
	eCPU,
	eOnline,
	eExit,

	Max
}eMancalaMode;

//シーンを変更するためのインターフェイスクラス
class ISceneChanger {
public:
	virtual ~ISceneChanger() {}
	virtual void ChangeScene(eScene NextScene) = 0;	//指定シーンに変更する
};