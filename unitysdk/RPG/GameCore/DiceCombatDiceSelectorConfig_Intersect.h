#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Intersect; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_INTERSECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DA4A0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_INTERSECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5DA4B0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_INTERSECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5DB290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Intersect_TypeDefinitionIndex = 16152;

	class DiceCombatDiceSelectorConfig_Intersect : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig* selector1; // 0x10
		::RPG::GameCore::DiceCombatDiceSelectorConfig* selector2; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_INTERSECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Intersect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Intersect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_INTERSECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Intersect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Intersect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_INTERSECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
