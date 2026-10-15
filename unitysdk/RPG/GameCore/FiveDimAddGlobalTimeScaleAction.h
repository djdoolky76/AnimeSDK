#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimAddGlobalTimeScaleAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AE3D0)
#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AE3E0)
#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AE3A0)

namespace RPG::GameCore
{
	class FiveDimAddGlobalTimeScaleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* Key; // 0x10
		::System::Single TimeScale; // 0x18
		::System::Boolean IgnoreSelf; // 0x1C
		::System::Boolean IgnoreChildren; // 0x1D
		::System::Boolean IgnorePlayer; // 0x1E
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
