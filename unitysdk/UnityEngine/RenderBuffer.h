#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RenderBuffer_TypeDefinitionIndex = 4120;

	struct alignas(4) RenderBuffer
	{
		::System::Int32 m_RenderTextureInstanceID; // 0x10
		::System::Byte _padding0[0x4];
		::System::IntPtr m_BufferPtr; // 0x18
	};
}
