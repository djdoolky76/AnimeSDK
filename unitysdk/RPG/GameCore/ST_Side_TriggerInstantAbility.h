#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_TriggerInstantAbility; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_TRIGGERINSTANTABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA877F0)
#define RPG_GAMECORE_ST_SIDE_TRIGGERINSTANTABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA87800)
#define RPG_GAMECORE_ST_SIDE_TRIGGERINSTANTABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA877C0)

namespace RPG::GameCore
{
	class ST_Side_TriggerInstantAbility : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean TriggerOnEnter; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* EnterAbilityName; // 0x20
		::System::Boolean TriggerOnExit; // 0x28
		::System::Byte _padding1[0x7];
		::System::String* ExitAbilityName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGERINSTANTABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_TriggerInstantAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_TriggerInstantAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGERINSTANTABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_TriggerInstantAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_TriggerInstantAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TRIGGERINSTANTABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
