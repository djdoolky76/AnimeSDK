#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvClientChangePropState; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVCLIENTCHANGEPROPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39A430)
#define RPG_GAMECORE_ADVCLIENTCHANGEPROPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39A460)
#define RPG_GAMECORE_ADVCLIENTCHANGEPROPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39A3E0)

namespace RPG::GameCore
{
	class AdvClientChangePropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PropState FromState; // 0x20
		::RPG::GameCore::PropState ToState; // 0x24
		::System::Boolean CanChangeServerProp; // 0x28
		::System::Boolean CanChangeFromAnyState; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCLIENTCHANGEPROPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvClientChangePropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvClientChangePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCLIENTCHANGEPROPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvClientChangePropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvClientChangePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCLIENTCHANGEPROPSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
