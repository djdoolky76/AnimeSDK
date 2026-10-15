#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialBlockAndWait; }

#define RPG_GAMECORE_TUTORIALBLOCKANDWAIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC65DA0)
#define RPG_GAMECORE_TUTORIALBLOCKANDWAIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC65DC0)
#define RPG_GAMECORE_TUTORIALBLOCKANDWAIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC65D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialBlockAndWait_TypeDefinitionIndex = 24380;

	class TutorialBlockAndWait : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single WaitSecond; // 0x18
		::System::Single MaxAdvencePerTick; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALBLOCKANDWAIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialBlockAndWait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialBlockAndWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALBLOCKANDWAIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialBlockAndWait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialBlockAndWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALBLOCKANDWAIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
