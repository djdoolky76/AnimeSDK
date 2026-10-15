#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyShowSwitchFromSpeTransition; }

#define RPG_GAMECORE_MONOPOLYSHOWSWITCHFROMSPETRANSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AD930)
#define RPG_GAMECORE_MONOPOLYSHOWSWITCHFROMSPETRANSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8AD940)
#define RPG_GAMECORE_MONOPOLYSHOWSWITCHFROMSPETRANSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8AD870)

namespace RPG::GameCore
{
	class MonopolyShowSwitchFromSpeTransition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHFROMSPETRANSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyShowSwitchFromSpeTransition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyShowSwitchFromSpeTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHFROMSPETRANSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyShowSwitchFromSpeTransition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyShowSwitchFromSpeTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHFROMSPETRANSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
