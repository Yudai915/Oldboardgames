#pragma once
#include "Task.h"
#include <string>

class FPS : public Task
{
public:
	FPS();
	FPS(int setfps, int setN);
	~FPS();

	void Initialize() override;	//初期化
	void Finalize() override;	//終了処理
	void Update() override;		//更新
	void Draw() override;		//描画
	void Wait();

private:
	int fontHandle;
	int counter;
	int nowfps;
	int starttime;

	int fps;
	int n;

	int stringwidth;
	std::string fpsstring;
};

