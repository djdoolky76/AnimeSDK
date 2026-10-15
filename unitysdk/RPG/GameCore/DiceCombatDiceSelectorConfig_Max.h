#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Max; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MAX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DA560)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MAX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5DA570)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MAX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5DB2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Max_TypeDefinitionIndex = 16148;

	class DiceCombatDiceSelectorConfig_Max : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MAX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Max* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Max*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MAX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Max* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Max*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MAX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
