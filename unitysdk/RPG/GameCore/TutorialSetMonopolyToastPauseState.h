#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialSetMonopolyToastPauseState; }

#define RPG_GAMECORE_TUTORIALSETMONOPOLYTOASTPAUSESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6E610)
#define RPG_GAMECORE_TUTORIALSETMONOPOLYTOASTPAUSESTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6E620)
#define RPG_GAMECORE_TUTORIALSETMONOPOLYTOASTPAUSESTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6E5D0)

namespace RPG::GameCore
{
	class TutorialSetMonopolyToastPauseState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSETMONOPOLYTOASTPAUSESTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialSetMonopolyToastPauseState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialSetMonopolyToastPauseState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSETMONOPOLYTOASTPAUSESTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialSetMonopolyToastPauseState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialSetMonopolyToastPauseState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSETMONOPOLYTOASTPAUSESTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
