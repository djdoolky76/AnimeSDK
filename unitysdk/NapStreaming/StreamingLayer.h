#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int StreamingLayer_TypeDefinitionIndex = 50763;

	enum class StreamingLayer : ::System::Int32
	{
		BRGPREFAB = 20,
		MAX = 22,
		OBJECTSWITCH = 15,
		EFFECT = 17,
		BIG = 1,
		DECAL = 7,
		BRG = 16,
		CODE_CONTROLL_2 = 11,
		CODE_CONTROLL_4 = 13,
		CODE_CONTROLL_1 = 10,
		COLLIDER = 18,
		MESHCOLLIDER = 19,
		INSTANCE = 0,
		ENVIROMENT = 5,
		MIDDLE = 2,
		LOWMEMORY = 8,
		CODE_CONTROLL_3 = 12,
		AIRWALL = 21,
		SMALL = 3,
		SMALLSHADOWPROXY = 14,
		GROUND = 6,
		UNDERGROUND = 9,
		SHADOWPROXY = 4,
	};
}
