#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJCEALHIAMM.h"

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceBaseNtfMessage_1_TypeDefinitionIndex = 78056;

	template <typename T>
	class CakeRaceBaseNtfMessage_1 : public ::CJCEALHIAMM
	{
	public:
		T _Msg; // 0x0
	};
}
