#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Cubemap; }

namespace UnityEngine::Rendering::LookDev
{
	struct alignas(8) Sky
	{
		::UnityEngine::Cubemap* cubemap; // 0x10
		::System::Single longitudeOffset; // 0x18
		::System::Single exposure; // 0x1C
	};
}
