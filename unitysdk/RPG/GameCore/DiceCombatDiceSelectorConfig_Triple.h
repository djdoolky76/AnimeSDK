#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Triple; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_TRIPLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D608950)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_TRIPLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D608960)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_TRIPLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D609580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Triple_TypeDefinitionIndex = 16142;

	class DiceCombatDiceSelectorConfig_Triple : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_TRIPLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Triple* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Triple*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_TRIPLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Triple* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Triple*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_TRIPLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
