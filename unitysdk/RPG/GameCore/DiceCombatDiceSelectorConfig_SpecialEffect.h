#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_SpecialEffect; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SPECIALEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6088E0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SPECIALEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6088F0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SPECIALEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6094F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_SpecialEffect_TypeDefinitionIndex = 16146;

	class DiceCombatDiceSelectorConfig_SpecialEffect : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SPECIALEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SPECIALEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SPECIALEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
