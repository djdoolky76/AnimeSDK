#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) SelfShadowSettings
	{
		::System::Boolean enableSelfShadow; // 0x10
		::System::Boolean enableFaceHairShadow; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 selfShadowCount; // 0x14
		::System::Int32 selfShadowResolution; // 0x18
	};
}
