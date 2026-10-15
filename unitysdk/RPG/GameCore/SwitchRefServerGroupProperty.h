#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchRefServerGroupProperty; }

#define RPG_GAMECORE_SWITCHREFSERVERGROUPPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB466C0)
#define RPG_GAMECORE_SWITCHREFSERVERGROUPPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB466D0)
#define RPG_GAMECORE_SWITCHREFSERVERGROUPPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB46D90)

namespace RPG::GameCore
{
	class SwitchRefServerGroupProperty : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFSERVERGROUPPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefServerGroupProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefServerGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFSERVERGROUPPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefServerGroupProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefServerGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFSERVERGROUPPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
