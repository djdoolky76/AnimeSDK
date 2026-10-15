#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AudioTriggerMode.h"
#include "unitysdk/DemodulatorOutPutType.h"
#include "unitysdk/EdgeDetectionMode.h"
#include "unitysdk/AudioTriggerInfo.h"
namespace System { class String; }

#define STAGEHARMONYAUDIODEMODULATOR_APAEIKPAHFH_OFFSET UNITYSDK_OFFSET(0xE98B650)
#define STAGEHARMONYAUDIODEMODULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE98B7E0)
#define STAGEHARMONYAUDIODEMODULATOR_FCDECODOKAK_OFFSET UNITYSDK_OFFSET(0xE98B6A0)
#define STAGEHARMONYAUDIODEMODULATOR_JHCJALOEFAI_OFFSET UNITYSDK_OFFSET(0xE98B7A0)

inline static constexpr unsigned int StageHarmonyAudioDemodulator_TypeDefinitionIndex = 47520;

	class StageHarmonyAudioDemodulator
	{
	public:
		::System::Single Threshold; // 0x28
		::System::Boolean InvertThreshold; // 0x2C
		::System::Byte _padding0[0x3];
		::EdgeDetectionMode EdgeDetection; // 0x30
		::System::Byte _padding1[0x4];
		::System::String* AudioEventName; // 0x38
		::AudioTriggerMode TriggerMode; // 0x40
		::System::Boolean StopOnBelowThreshold; // 0x44
		::System::Byte _padding2[0x3];
		::System::Single FadeOutTime; // 0x48
		::System::Single Cooldown; // 0x4C
		::System::Single _currentSignal; // 0x50
		::System::Boolean _isTriggered; // 0x54
		::System::Boolean _lastTriggered; // 0x55
		::System::Byte _padding3[0x2];
		::System::Single _lastSignal; // 0x58
		::System::Boolean _isInitialized; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIODEMODULATOR_CTOR_OFFSET))(this);
		}

		::DemodulatorOutPutType APAEIKPAHFH()
		{
			return ((::DemodulatorOutPutType(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIODEMODULATOR_APAEIKPAHFH_OFFSET))(this);
		}

		::AudioTriggerInfo FCDECODOKAK(::System::Single a1)
		{
			return ((::AudioTriggerInfo(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIODEMODULATOR_FCDECODOKAK_OFFSET))(this, a1);
		}

		::System::String* JHCJALOEFAI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIODEMODULATOR_JHCJALOEFAI_OFFSET))(this);
		}

	};
