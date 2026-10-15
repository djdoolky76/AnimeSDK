#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierInterceptAddInProgressStyleExpConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDINPROGRESSSTYLEEXPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E97A0)
#define RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDINPROGRESSSTYLEEXPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E97B0)
#define RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDINPROGRESSSTYLEEXPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E9760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierInterceptAddInProgressStyleExpConfig_TypeDefinitionIndex = 17804;

	class RogueModifierInterceptAddInProgressStyleExpConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDINPROGRESSSTYLEEXPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierInterceptAddInProgressStyleExpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierInterceptAddInProgressStyleExpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDINPROGRESSSTYLEEXPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierInterceptAddInProgressStyleExpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierInterceptAddInProgressStyleExpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINTERCEPTADDINPROGRESSSTYLEEXPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
