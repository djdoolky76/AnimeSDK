#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialClose; }

#define RPG_GAMECORE_TUTORIALCLOSE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC66A70)
#define RPG_GAMECORE_TUTORIALCLOSE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC66A80)
#define RPG_GAMECORE_TUTORIALCLOSE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC669B0)

namespace RPG::GameCore
{
	class TutorialClose : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLOSE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialClose* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialClose*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLOSE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialClose* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialClose*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCLOSE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
