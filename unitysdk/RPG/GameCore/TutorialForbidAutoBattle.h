#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialForbidAutoBattle; }

#define RPG_GAMECORE_TUTORIALFORBIDAUTOBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC67E20)
#define RPG_GAMECORE_TUTORIALFORBIDAUTOBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC67E30)
#define RPG_GAMECORE_TUTORIALFORBIDAUTOBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC67DF0)

namespace RPG::GameCore
{
	class TutorialForbidAutoBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsForbid; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALFORBIDAUTOBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialForbidAutoBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialForbidAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALFORBIDAUTOBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialForbidAutoBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialForbidAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALFORBIDAUTOBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
