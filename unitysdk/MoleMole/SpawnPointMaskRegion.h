#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLLLHBELOIN.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int SpawnPointMaskRegion_TypeDefinitionIndex = 84888;

	struct alignas(8) SpawnPointMaskRegion
	{
		::BLLLHBELOIN shape; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* prefixFilter; // 0x18
		::System::Single radius; // 0x20
		::System::Single height; // 0x24
		::UnityEngine::Vector3 extend; // 0x28
	};
}
