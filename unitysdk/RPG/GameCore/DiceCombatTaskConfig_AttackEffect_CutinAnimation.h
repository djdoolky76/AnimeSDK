#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_AttackEffect_CutinAnimation; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTINANIMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C11B0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTINANIMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F3C11C0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTINANIMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F3C1120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_AttackEffect_CutinAnimation_TypeDefinitionIndex = 16203;

	class DiceCombatTaskConfig_AttackEffect_CutinAnimation : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTINANIMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTINANIMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTINANIMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
