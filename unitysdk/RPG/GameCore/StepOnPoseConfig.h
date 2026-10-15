#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StepOnPoseConfig; }
namespace System { class String; }

#define RPG_GAMECORE_STEPONPOSECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB24300)
#define RPG_GAMECORE_STEPONPOSECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB24050)

namespace RPG::GameCore
{
	class StepOnPoseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StepOnPoseStateGroup; // 0x10
		::System::String* StepOnPoseStateA; // 0x18
		::System::String* StepOnPoseStateB; // 0x20
		::System::String* StepOnPoseStateAtoB; // 0x28
		::System::String* StepOnPoseStateBtoA; // 0x30
		::System::String* StepOnPoseRTPC; // 0x38
		::System::String* OnStepOnPoseEvent; // 0x40
		::System::String* LeaveStepOnPoseEvent; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STEPONPOSECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StepOnPoseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StepOnPoseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STEPONPOSECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
