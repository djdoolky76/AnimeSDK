#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
namespace RPG::GameCore { class LevelBeforeTurnStateChange; }

#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xF1E4390)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF1E42B0)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF1E4300)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0xF1E4370)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GET_PREVTURNSTATE_OFFSET UNITYSDK_OFFSET(0xF1E4350)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xF1E4250)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_SET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0xF1E4380)
#define RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_SET_PREVTURNSTATE_OFFSET UNITYSDK_OFFSET(0xF1E4360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBeforeTurnStateChange_TypeDefinitionIndex = 57919;

	class LevelBeforeTurnStateChange : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::TurnState _PrevTurnState_k__BackingField; // 0x18
		::RPG::GameCore::TurnState _CurrentTurnState_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelBeforeTurnStateChange* Init(::RPG::GameCore::TurnState a1, ::RPG::GameCore::TurnState a2)
		{
			return ((::RPG::GameCore::LevelBeforeTurnStateChange*(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_INIT_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::TurnState get_PrevTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GET_PREVTURNSTATE_OFFSET))(this);
		}

		::System::Void set_PrevTurnState(::RPG::GameCore::TurnState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_SET_PREVTURNSTATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnState get_CurrentTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_GET_CURRENTTURNSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentTurnState(::RPG::GameCore::TurnState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFORETURNSTATECHANGE_SET_CURRENTTURNSTATE_OFFSET))(this, a1);
		}

	};
}
