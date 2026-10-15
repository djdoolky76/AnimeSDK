#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Union; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_UNION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6089C0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_UNION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6089D0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_UNION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D609610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Union_TypeDefinitionIndex = 16151;

	class DiceCombatDiceSelectorConfig_Union : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::RPG::GameCore::DiceCombatDiceSelectorConfig* selector1; // 0x10
		::RPG::GameCore::DiceCombatDiceSelectorConfig* selector2; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_UNION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Union* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Union*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_UNION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Union* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Union*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_UNION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
