#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Even; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_EVEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D607D00)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_EVEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D607D60)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_EVEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D608B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Even_TypeDefinitionIndex = 16144;

	class DiceCombatDiceSelectorConfig_Even : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AtLeastCount; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_EVEN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Even* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Even*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_EVEN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Even* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Even*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_EVEN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
