#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicStageBattleEventMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetDynamicStageBattleEvent; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETDYNAMICSTAGEBATTLEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA71FE0)
#define RPG_GAMECORE_SETDYNAMICSTAGEBATTLEEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA72080)
#define RPG_GAMECORE_SETDYNAMICSTAGEBATTLEEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA71F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicStageBattleEvent_TypeDefinitionIndex = 22745;

	class SetDynamicStageBattleEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicStageBattleEventMode Mode; // 0x18
		::System::UInt32 EventID; // 0x1C
		::RPG::GameCore::TargetEvaluator* PosTargetType; // 0x20
		::RPG::GameCore::DynamicFloat* Delay; // 0x28
		::RPG::GameCore::DynamicFloat* Duration; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTAGEBATTLEEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicStageBattleEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicStageBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTAGEBATTLEEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicStageBattleEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicStageBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTAGEBATTLEEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
