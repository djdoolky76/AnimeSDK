#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DD150)
#define RPG_GAMECORE_ROGUEMODIFIERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9DD9A0)
#define RPG_GAMECORE_ROGUEMODIFIERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9DD940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierConfig_TypeDefinitionIndex = 17931;

	class RogueModifierConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
