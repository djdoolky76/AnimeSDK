#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerSpecialHint; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C46C0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F3C46D0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F3C4600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerSpecialHint_TypeDefinitionIndex = 16200;

	class DiceCombatTaskConfig_TriggerSpecialHint : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::UInt32 SpecialHintID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSpecialHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
