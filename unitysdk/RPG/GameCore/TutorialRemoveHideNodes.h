#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialRemoveHideNodes; }
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALREMOVEHIDENODES_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC3F9D0)
#define RPG_GAMECORE_TUTORIALREMOVEHIDENODES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC3F9E0)
#define RPG_GAMECORE_TUTORIALREMOVEHIDENODES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC3F9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialRemoveHideNodes_TypeDefinitionIndex = 24378;

	class TutorialRemoveHideNodes : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* NodeIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALREMOVEHIDENODES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialRemoveHideNodes* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialRemoveHideNodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALREMOVEHIDENODES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialRemoveHideNodes* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialRemoveHideNodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALREMOVEHIDENODES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
