#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialFinish; }

#define RPG_GAMECORE_TUTORIALFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC67CE0)
#define RPG_GAMECORE_TUTORIALFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC67CF0)
#define RPG_GAMECORE_TUTORIALFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC67CB0)

namespace RPG::GameCore
{
	class TutorialFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TutorialID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
