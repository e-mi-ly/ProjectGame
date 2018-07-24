#pragma once
#include "Simon.h"
#include "Input.h"
#include "Animation.h"

class BaseState
{
protected:
	Simon * simon;
	Input* input;
	Animation* animation;

public:
	BaseState();
	BaseState(Simon* simon, Input* input);
	~BaseState();

	virtual void init() = 0;
	virtual void handleInput(float dt) = 0;
	virtual void update(float dt) = 0;

	virtual void onStart() = 0;
	virtual void onExit() = 0; // Call samus do anthing before exit state
};