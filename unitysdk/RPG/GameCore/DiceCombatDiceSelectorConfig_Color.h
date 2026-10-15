#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceRare.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Color; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_COLOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D607C00)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_COLOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D607C10)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_COLOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D608B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Color_TypeDefinitionIndex = 16147;

	class DiceCombatDiceSelectorConfig_Color : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatDiceRare>* RareList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_COLOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Color* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Color*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_COLOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Color* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Color*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_COLOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
