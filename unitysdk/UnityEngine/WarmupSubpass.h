#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	struct alignas(8) WarmupSubpass
	{
		::Il2CppArray<::System::Int32>* inputAttachments; // 0x10
		::Il2CppArray<::System::Int32>* colorAttachments; // 0x18
		::System::Boolean readOnlyDepth; // 0x20
	};
}
