#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialSetMonopolyPauseState; }

#define RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC40BD0)
#define RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC40BE0)
#define RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC40B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialSetMonopolyPauseState_TypeDefinitionIndex = 24364;

	class TutorialSetMonopolyPauseState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialSetMonopolyPauseState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialSetMonopolyPauseState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialSetMonopolyPauseState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialSetMonopolyPauseState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSETMONOPOLYPAUSESTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
