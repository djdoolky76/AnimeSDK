#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJCEALHIAMM.h"

namespace RPG::Client::LittleGame::CakeRace
{
	template <typename T>
	class CakeRaceBaseNtfMessage_1 : public ::CJCEALHIAMM
	{
	public:
		T _Msg; // 0x0
	};
}
