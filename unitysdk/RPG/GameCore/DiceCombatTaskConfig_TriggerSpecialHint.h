#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerSpecialHint; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E6B80)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E6B90)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSPECIALHINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E6AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerSpecialHint_TypeDefinitionIndex = 16042;

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
