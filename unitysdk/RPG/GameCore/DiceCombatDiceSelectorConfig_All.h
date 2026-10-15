#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_All; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ALL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DA110)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ALL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5DA120)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ALL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5DB000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_All_TypeDefinitionIndex = 16138;

	class DiceCombatDiceSelectorConfig_All : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ALL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_All* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_All*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ALL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_All* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_All*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_ALL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
