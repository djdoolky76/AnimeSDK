#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchRefServerPropState; }

#define RPG_GAMECORE_SWITCHREFSERVERPROPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB466E0)
#define RPG_GAMECORE_SWITCHREFSERVERPROPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB466F0)
#define RPG_GAMECORE_SWITCHREFSERVERPROPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB46DB0)

namespace RPG::GameCore
{
	class SwitchRefServerPropState : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFSERVERPROPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefServerPropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefServerPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFSERVERPROPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefServerPropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefServerPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFSERVERPROPSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
