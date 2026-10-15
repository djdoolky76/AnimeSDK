#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_UINTKEYGETTER_GET_OFFSET UNITYSDK_OFFSET(0x2F91F30)

namespace UnityEngine::Rendering
{
	struct alignas(4) CoreUnsafeUtils_UintKeyGetter
	{
		::System::UInt32 Get(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_UINTKEYGETTER_GET_OFFSET))(this, a1);
		}

	};
}
