#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Filter; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DA3A0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5DA3B0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5DB240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Filter_TypeDefinitionIndex = 16153;

	class DiceCombatDiceSelectorConfig_Filter : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatDiceSelectorConfig*>* selectorList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Filter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_FILTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
