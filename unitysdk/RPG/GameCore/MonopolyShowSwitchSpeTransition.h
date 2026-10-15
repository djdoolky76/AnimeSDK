#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyShowSwitchSpeTransition; }

#define RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D880120)
#define RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D880130)
#define RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D880060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyShowSwitchSpeTransition_TypeDefinitionIndex = 20939;

	class MonopolyShowSwitchSpeTransition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyShowSwitchSpeTransition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyShowSwitchSpeTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyShowSwitchSpeTransition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyShowSwitchSpeTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
