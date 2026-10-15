#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Min; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D608050)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D608060)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D608DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Min_TypeDefinitionIndex = 16149;

	class DiceCombatDiceSelectorConfig_Min : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Min* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Min*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Min* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Min*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_MIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
