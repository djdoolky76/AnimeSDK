#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_SamePointCount; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SAMEPOINTCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D608650)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SAMEPOINTCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D608660)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SAMEPOINTCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D609340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_SamePointCount_TypeDefinitionIndex = 16140;

	class DiceCombatDiceSelectorConfig_SamePointCount : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Count; // 0x10
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SAMEPOINTCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SAMEPOINTCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SamePointCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SAMEPOINTCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
