#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialClearAllHideNodes; }

#define RPG_GAMECORE_TUTORIALCLEARALLHIDENODES_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC66790)
#define RPG_GAMECORE_TUTORIALCLEARALLHIDENODES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC667A0)
#define RPG_GAMECORE_TUTORIALCLEARALLHIDENODES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC666D0)

namespace RPG::GameCore
{
	class TutorialClearAllHideNodes : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLEARALLHIDENODES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialClearAllHideNodes* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialClearAllHideNodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLEARALLHIDENODES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialClearAllHideNodes* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialClearAllHideNodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLEARALLHIDENODES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
