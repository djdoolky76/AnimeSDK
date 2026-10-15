#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SoundEmitterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerSound; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERSOUND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC30720)
#define RPG_GAMECORE_TRIGGERSOUND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC30730)
#define RPG_GAMECORE_TRIGGERSOUND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC30570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerSound_TypeDefinitionIndex = 20609;

	class TriggerSound : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* SoundName; // 0x18
		::RPG::GameCore::SoundEmitterType EmitterType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::String* UniqueName; // 0x30
		::System::UInt32 GroupID; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::Boolean IsPropLodLoop; // 0x40
		::System::Boolean IsEnableMusicCue; // 0x41
		::System::Boolean IsEnableGetPlayingPosition; // 0x42
		::System::Byte _padding1[0x1];
		::System::Single EventCD; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerSound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerSound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
