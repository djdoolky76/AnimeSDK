#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Odd; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ODD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6080C0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ODD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D608120)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ODD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D608E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Odd_TypeDefinitionIndex = 16145;

	class DiceCombatDiceSelectorConfig_Odd : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AtLeastCount; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ODD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ODD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ODD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
