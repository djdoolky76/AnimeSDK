#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseClockParkGameState.h"
#include "unitysdk/RPG/Client/ClockParkGameStateEnum.h"

#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0xD4EC990)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0xD4EDCD0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE_ISSHOWATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0xD4EDDE0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE__ONEXIT_OFFSET UNITYSDK_OFFSET(0xD4EDC30)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkInstance_ClockParkStoryState_TypeDefinitionIndex = 62859;

	class ClockParkInstance_ClockParkStoryState : public ::RPG::Client::BaseClockParkGameState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE_CTOR_OFFSET))(this);
		}

		::System::Void _OnExit(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE__ONEXIT_OFFSET))(this, a1);
		}

		::System::Boolean FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE_FINISHROUND_OFFSET))(this);
		}

		::System::Boolean IsShowAttributeInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE_ISSHOWATTRIBUTEINFO_OFFSET))(this);
		}

	};
}
