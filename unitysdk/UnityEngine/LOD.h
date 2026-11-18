#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Renderer; }

namespace UnityEngine
{
	inline static constexpr unsigned int LOD_TypeDefinitionIndex = 5260;

	struct alignas(8) LOD
	{
		::System::Single screenRelativeTransitionHeight; // 0x10
		::System::Single fadeTransitionWidth; // 0x14
		::System::Single controlByDistance; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x20
	};
}
