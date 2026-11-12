#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class LevelApplyBattleCardBuffSelectionEvent; }

#define RPG_GAMECORE_LEVELAPPLYBATTLECARDBUFFSELECTIONEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xF1DDB10)
#define RPG_GAMECORE_LEVELAPPLYBATTLECARDBUFFSELECTIONEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF1DDA70)
#define RPG_GAMECORE_LEVELAPPLYBATTLECARDBUFFSELECTIONEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF1DDA20)
#define RPG_GAMECORE_LEVELAPPLYBATTLECARDBUFFSELECTIONEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xF1DDAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelApplyBattleCardBuffSelectionEvent_TypeDefinitionIndex = 58034;

	class LevelApplyBattleCardBuffSelectionEvent : public ::CMPGEAFHHDC
	{
	public:
		::System::Int32 SelectIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAPPLYBATTLECARDBUFFSELECTIONEVENT_CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAPPLYBATTLECARDBUFFSELECTIONEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAPPLYBATTLECARDBUFFSELECTIONEVENT_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::LevelApplyBattleCardBuffSelectionEvent* Init(::System::Int32 a1)
		{
			return ((::RPG::GameCore::LevelApplyBattleCardBuffSelectionEvent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAPPLYBATTLECARDBUFFSELECTIONEVENT_INIT_OFFSET))(this, a1);
		}

	};
}
