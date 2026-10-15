#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkSkillDice; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E4E10)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E4E20)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E4DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_MarkSkillDice_TypeDefinitionIndex = 16157;

	class DiceCombatTaskConfig_MarkSkillDice : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig* Selector; // 0x10
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnSuccess; // 0x18
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnFail; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MARKSKILLDICE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
