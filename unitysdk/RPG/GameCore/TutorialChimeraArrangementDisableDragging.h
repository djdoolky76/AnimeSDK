#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialChimeraArrangementDisableDragging; }

#define RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC388B0)
#define RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC388C0)
#define RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC38870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialChimeraArrangementDisableDragging_TypeDefinitionIndex = 24385;

	class TutorialChimeraArrangementDisableDragging : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DisableDragging; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialChimeraArrangementDisableDragging* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialChimeraArrangementDisableDragging*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialChimeraArrangementDisableDragging* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialChimeraArrangementDisableDragging*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALCHIMERAARRANGEMENTDISABLEDRAGGING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
