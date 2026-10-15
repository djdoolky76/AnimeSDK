#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_LOD_CTOR_OFFSET UNITYSDK_OFFSET(0x3C6EDC0)

namespace UnityEngine
{
	struct alignas(8) LOD
	{
		::System::Single screenRelativeTransitionHeight; // 0x10
		::System::Single fadeTransitionWidth; // 0x14
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x18
		::System::Void _ctor(::System::Single a1, ::Il2CppArray<::UnityEngine::Renderer*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOD_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
