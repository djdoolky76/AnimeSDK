#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCGCustomGlobalAnimation_TypeDefinitionIndex = 54779;

	struct alignas(8) ConfigCGCustomGlobalAnimation
	{
		::System::Single OpenDuration; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* OpenCurve; // 0x18
		::System::Single CloseDuration; // 0x20
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* CloseCurve; // 0x28
	};
}
