#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Renderer; }

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCLODRendererItem_TypeDefinitionIndex = 80401;

	struct alignas(8) NPCLODRendererItem
	{
		::UnityEngine::Renderer* renderer; // 0x10
		::System::Boolean matInstanced; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::Int32>* matInstanceIDs; // 0x20
		::System::Int32 sharedMatCnt; // 0x28
	};
}
