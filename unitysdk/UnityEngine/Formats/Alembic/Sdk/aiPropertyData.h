#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPropertyType.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	struct alignas(4) aiPropertyData
	{
		::System::IntPtr data; // 0x10
		::System::Int32 size; // 0x18
		::UnityEngine::Formats::Alembic::Sdk::aiPropertyType type; // 0x1C
	};
}
