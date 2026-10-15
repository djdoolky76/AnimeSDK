#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierChangePropDestructGenerateNumberConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPROPDESTRUCTGENERATENUMBERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AFF60)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPROPDESTRUCTGENERATENUMBERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9AFF70)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPROPDESTRUCTGENERATENUMBERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9AFF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierChangePropDestructGenerateNumberConfig_TypeDefinitionIndex = 17973;

	class RogueModifierChangePropDestructGenerateNumberConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPROPDESTRUCTGENERATENUMBERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierChangePropDestructGenerateNumberConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierChangePropDestructGenerateNumberConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPROPDESTRUCTGENERATENUMBERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierChangePropDestructGenerateNumberConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierChangePropDestructGenerateNumberConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPROPDESTRUCTGENERATENUMBERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
