#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyDemodulator.h"

	template <typename T>
	class StageHarmonyBaseDemodulator_1 : public ::StageHarmonyDemodulator
	{
	public:
		T DebugOuputValue; // 0x0
	};
