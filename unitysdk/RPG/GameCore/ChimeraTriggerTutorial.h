#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraTriggerTutorial; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERATRIGGERTUTORIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B09C0)
#define RPG_GAMECORE_CHIMERATRIGGERTUTORIAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B09D0)
#define RPG_GAMECORE_CHIMERATRIGGERTUTORIAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B0970)

namespace RPG::GameCore
{
	class ChimeraTriggerTutorial : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* TutorialID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERTUTORIAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTriggerTutorial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTriggerTutorial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERTUTORIAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTriggerTutorial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTriggerTutorial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERTUTORIAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
