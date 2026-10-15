#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyShowSwitchFromSpeTransition; }

#define RPG_GAMECORE_MONOPOLYSHOWSWITCHFROMSPETRANSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D87FF90)
#define RPG_GAMECORE_MONOPOLYSHOWSWITCHFROMSPETRANSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D87FFA0)
#define RPG_GAMECORE_MONOPOLYSHOWSWITCHFROMSPETRANSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D87FED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyShowSwitchFromSpeTransition_TypeDefinitionIndex = 20940;

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
