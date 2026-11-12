#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ClockParkGameStateEnum.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ClockParkInstance; }

#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0xD1450E0)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD145030)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_ENABLEDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0xD144DC0)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xD144E40)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xD144F10)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0xD144D40)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_ISSHOWATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0xD144E00)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_ISSHOWDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0xD144D80)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_TICK_OFFSET UNITYSDK_OFFSET(0xD144FE0)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xD144D00)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE__ONENTER_OFFSET UNITYSDK_OFFSET(0xD144C60)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE__ONEXIT_OFFSET UNITYSDK_OFFSET(0xD144CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseClockParkGameState_TypeDefinitionIndex = 62885;

	class BaseClockParkGameState : public ::System::Object
	{
	public:
		::RPG::Client::ClockParkInstance* _OwnerInstanceRef; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_CTOR_OFFSET))(this);
		}

		::System::Void _OnEnter(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE__ONENTER_OFFSET))(this, a1);
		}

		::System::Void _OnExit(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE__ONEXIT_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE__ONDISPOSE_OFFSET))(this);
		}

		::System::Boolean FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_FINISHROUND_OFFSET))(this);
		}

		::System::Boolean IsShowDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_ISSHOWDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean EnableDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_ENABLEDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean IsShowAttributeInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_ISSHOWATTRIBUTEINFO_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::ClockParkInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_EXIT_OFFSET))(this);
		}

		::System::Void Tick(::RPG::Client::ClockParkInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_DISPOSE_OFFSET))(this);
		}

	};
}
