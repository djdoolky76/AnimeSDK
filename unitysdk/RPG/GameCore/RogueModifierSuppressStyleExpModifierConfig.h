#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSuppressStyleExpModifierConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEEXPMODIFIERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ED100)
#define RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEEXPMODIFIERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9ED110)
#define RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEEXPMODIFIERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9ED0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSuppressStyleExpModifierConfig_TypeDefinitionIndex = 17805;

	class RogueModifierSuppressStyleExpModifierConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEEXPMODIFIERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSuppressStyleExpModifierConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSuppressStyleExpModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEEXPMODIFIERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSuppressStyleExpModifierConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSuppressStyleExpModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEEXPMODIFIERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
