#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiSubmeshData_TypeDefinitionIndex = 45813;

	struct alignas(8) aiSubmeshData
	{
		::System::IntPtr indexes; // 0x10
		::PVOID facesetNames; // 0x18
	};
}
