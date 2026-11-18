#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace Cinemachine { class NoiseSettings; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_TIMELINE_CAMNOISEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13F160F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CamNoiseBehaviour_TypeDefinitionIndex = 85161;

	class CamNoiseBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Cinemachine::NoiseSettings* noiseProfile; // 0x10
		::System::Single amplitudeGain; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* amplitudeCurve; // 0x20
		::System::Single frequencyGain; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* frequencyCurve; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMNOISEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
