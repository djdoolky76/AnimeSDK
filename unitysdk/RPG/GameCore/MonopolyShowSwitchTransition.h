#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyShowSwitchTransition; }

#define RPG_GAMECORE_MONOPOLYSHOWSWITCHTRANSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1E471390)
#define RPG_GAMECORE_MONOPOLYSHOWSWITCHTRANSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E4713A0)
#define RPG_GAMECORE_MONOPOLYSHOWSWITCHTRANSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E471360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyShowSwitchTransition_TypeDefinitionIndex = 21275;

	class MonopolyShowSwitchTransition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean isShow; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHTRANSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyShowSwitchTransition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyShowSwitchTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHTRANSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyShowSwitchTransition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyShowSwitchTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHTRANSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
