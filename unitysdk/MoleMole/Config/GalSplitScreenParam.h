#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int GalSplitScreenParam_TypeDefinitionIndex = 39792;

	struct alignas(8) GalSplitScreenParam
	{
		::System::Single splitScreenDuration; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* splitScreenMoveCurve; // 0x18
	};
}
