#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PumanHuntGameplayController; }

#define RPG_GAMECORE_PUMANHUNTGAMEPLAYCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95D200)
#define RPG_GAMECORE_PUMANHUNTGAMEPLAYCONTROLLER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95D210)
#define RPG_GAMECORE_PUMANHUNTGAMEPLAYCONTROLLER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95D140)

namespace RPG::GameCore
{
	class PumanHuntGameplayController : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANHUNTGAMEPLAYCONTROLLER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PumanHuntGameplayController* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PumanHuntGameplayController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANHUNTGAMEPLAYCONTROLLER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PumanHuntGameplayController* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PumanHuntGameplayController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUMANHUNTGAMEPLAYCONTROLLER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
