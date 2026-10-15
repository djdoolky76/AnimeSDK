#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatSkillAIEffectConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig; }

#define RPG_GAMECORE_DICECOMBATSKILLAIEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E2940)
#define RPG_GAMECORE_DICECOMBATSKILLAIEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E2850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatSkillAIEffectConfig_TypeDefinitionIndex = 16124;

	class DiceCombatSkillAIEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* Effects; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATSKILLAIEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatSkillAIEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatSkillAIEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATSKILLAIEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
