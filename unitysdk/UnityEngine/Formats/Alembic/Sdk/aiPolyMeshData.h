#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiPolyMeshData_TypeDefinitionIndex = 45812;

	struct alignas(8) aiPolyMeshData
	{
		::PVOID positions; // 0x10
		::PVOID velocities; // 0x18
		::PVOID normals; // 0x20
		::PVOID tangents; // 0x28
		::PVOID uv0; // 0x30
		::PVOID uv1; // 0x38
		::PVOID rgba; // 0x40
		::PVOID rgb; // 0x48
		::System::IntPtr indices; // 0x50
		::System::Int32 vertexCount; // 0x58
		::System::Int32 indexCount; // 0x5C
		::UnityEngine::Vector3 center; // 0x60
		::UnityEngine::Vector3 extents; // 0x6C
	};
}
