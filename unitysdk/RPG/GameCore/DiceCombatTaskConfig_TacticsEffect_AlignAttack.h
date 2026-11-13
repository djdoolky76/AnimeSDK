#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_TacticsEffect_AlignAttack; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNATTACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C3BD0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNATTACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F3C3BE0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNATTACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F3C3B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TacticsEffect_AlignAttack_TypeDefinitionIndex = 16321;

	class DiceCombatTaskConfig_TacticsEffect_AlignAttack : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNATTACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNATTACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNATTACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
