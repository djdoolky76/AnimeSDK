#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialLockControl; }

#define RPG_GAMECORE_TUTORIALLOCKCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6CCA0)
#define RPG_GAMECORE_TUTORIALLOCKCONTROL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6CCB0)
#define RPG_GAMECORE_TUTORIALLOCKCONTROL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6CC70)

namespace RPG::GameCore
{
	class TutorialLockControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Reset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALLOCKCONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialLockControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialLockControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALLOCKCONTROL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialLockControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialLockControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALLOCKCONTROL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
