#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Texture; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int MaterialWrapper_SetTexCmd_TypeDefinitionIndex = 6010;

	struct alignas(8) MaterialWrapper_SetTexCmd
	{
		::System::Int32 NameID; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Texture* Value; // 0x18
	};
}
