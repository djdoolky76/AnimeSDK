#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimAudioSetStateAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AFA60)
#define RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AFA70)
#define RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AFA30)

namespace RPG::GameCore
{
	class FiveDimAudioSetStateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* StateGroup; // 0x10
		::System::String* State; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAudioSetStateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAudioSetStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAudioSetStateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAudioSetStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
