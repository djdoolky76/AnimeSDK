#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeBufferType_TypeDefinitionIndex = 5218;

	enum class ComputeBufferType : ::System::Int32
	{
		Default = 0,
		Raw = 1,
		Append = 2,
		Counter = 4,
		Constant = 8,
		Structured = 16,
		DrawIndirect = 256,
		IndirectArguments = 256,
		GPUMemory = 512,
		Typed = 1024,
	};
}
