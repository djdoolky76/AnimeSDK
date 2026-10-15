#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHCEEHPIGFL.h"

namespace RPG::Client::LittleGame::CakeRace
{
	template <typename T>
	class CakeRaceBaseRspMessage_1 : public ::BHCEEHPIGFL
	{
	public:
		T _Msg; // 0x0
	};
}
