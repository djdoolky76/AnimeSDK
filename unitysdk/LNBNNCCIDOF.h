#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LNBNNCCIDOF_TypeDefinitionIndex = 41269;

enum class LNBNNCCIDOF : ::System::Int32
{
	StaticCollision = 1,
	MoveCollision = 2,
	TracingBySpeed = 3,
	AutoAimMove = 5,
	Unknow = 0,
	MustHitByTime = 4,
};
