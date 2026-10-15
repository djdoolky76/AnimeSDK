#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerSkillCutin; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E6880)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E6890)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E6830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerSkillCutin_TypeDefinitionIndex = 16038;

	class DiceCombatTaskConfig_TriggerSkillCutin : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::System::UInt32 CutinID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
