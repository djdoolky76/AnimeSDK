#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	struct alignas(4) aiCurvesData
	{
		::UnityEngine::Formats::Alembic::Sdk::Bool visibility; // 0x10
		::System::Byte _padding0[0x7];
		::System::IntPtr positions; // 0x18
		::System::IntPtr numVertices; // 0x20
		::System::IntPtr uvs; // 0x28
		::System::IntPtr widths; // 0x30
		::System::IntPtr velocities; // 0x38
		::System::Int32 count; // 0x40
	};
}
