#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	struct alignas(8) aiSubmeshData
	{
		::System::IntPtr indexes; // 0x10
		::PVOID facesetNames; // 0x18
	};
}
