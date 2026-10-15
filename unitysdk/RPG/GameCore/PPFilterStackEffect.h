#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PPFilterStackEffect; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PPFILTERSTACKEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EA080)
#define RPG_GAMECORE_PPFILTERSTACKEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8EA0B0)
#define RPG_GAMECORE_PPFILTERSTACKEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EA020)

namespace RPG::GameCore
{
	class PPFilterStackEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::System::Boolean Active; // 0x19
		::System::Byte _padding0[0x2];
		::RPG::GameCore::PPEffectFilterPriorityGroup PriorityGroup; // 0x1C
		::RPG::GameCore::PPEffectFilterPriority Priority; // 0x20
		::System::Single StartRate; // 0x24
		::System::Single Rate; // 0x28
		::System::Single Duration; // 0x2C
		::System::Single RecoverDuration; // 0x30
		::System::Byte _padding1[0x4];
		::System::String* AssetPath; // 0x38
		::System::Boolean MuteAudioEvent; // 0x40
		::System::Boolean IsDistanceAttenuationOn; // 0x41
		::System::Byte _padding2[0x6];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x48
		::System::UInt32 MaxAttenuationDistance; // 0x50
		::System::Single MaxAttenuationDistanceRate; // 0x54
		::System::Single MinAttenuationDistanceRate; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PPFILTERSTACKEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PPFilterStackEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PPFilterStackEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PPFILTERSTACKEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PPFilterStackEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PPFilterStackEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PPFILTERSTACKEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
