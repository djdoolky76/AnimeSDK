#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SoundEmitterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerHitVibration; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERHITVIBRATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC53CB0)
#define RPG_GAMECORE_TRIGGERHITVIBRATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC53CC0)
#define RPG_GAMECORE_TRIGGERHITVIBRATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC53C70)

namespace RPG::GameCore
{
	class TriggerHitVibration : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SoundName; // 0x18
		::RPG::GameCore::SoundEmitterType EmitterType; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* StopOnAnimStateExit; // 0x28
		::System::String* StopOnFreeStyleClipExit; // 0x30
		::System::Single StopTransitionDuration; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITVIBRATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerHitVibration* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerHitVibration*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITVIBRATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerHitVibration* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerHitVibration*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITVIBRATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
