#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNGGGPCDLCA.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_TIMELINE_CAMERAPROCEDURALAXISSETTINGS_OIOCDLMKFHN_OFFSET UNITYSDK_OFFSET(0x1A7234A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CameraProceduralAxisSettings_TypeDefinitionIndex = 82757;

	struct alignas(8) CameraProceduralAxisSettings
	{
		::System::Boolean Enabled; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single Weight; // 0x14
		::System::Single CenterOffset; // 0x18
		::System::Single StartPhaseOffset; // 0x1C
		::System::Single Amplitude; // 0x20
		::System::Single Frequency; // 0x24
		::System::Boolean EnableDisturbance; // 0x28
		::System::Byte _padding1[0x3];
		::LNGGGPCDLCA NoiseMode; // 0x2C
		::UnityEngine::AnimationCurve* PreGeneratedSignal; // 0x30
		::System::Int32 PreGeneratedSignature; // 0x38

		/*
		static ::MoleMole::Timeline::CameraProceduralAxisSettings OIOCDLMKFHN(::System::Single DFDHNBFGMFM)
		{
			return ((::MoleMole::Timeline::CameraProceduralAxisSettings(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAPROCEDURALAXISSETTINGS_OIOCDLMKFHN_OFFSET))(DFDHNBFGMFM);
		}
		*/
	};
}
