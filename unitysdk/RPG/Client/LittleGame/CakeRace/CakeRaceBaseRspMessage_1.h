#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHCEEHPIGFL.h"

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceBaseRspMessage_1_TypeDefinitionIndex = 78053;

	template <typename T>
	class CakeRaceBaseRspMessage_1 : public ::BHCEEHPIGFL
	{
	public:
		T _Msg; // 0x0
	};
}
