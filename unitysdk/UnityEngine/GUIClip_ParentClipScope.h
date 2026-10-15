#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"

#define UNITYENGINE_GUICLIP_PARENTCLIPSCOPE_CTOR_OFFSET UNITYSDK_OFFSET(0x3C7DD80)
#define UNITYENGINE_GUICLIP_PARENTCLIPSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C7DE20)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIClip_ParentClipScope_TypeDefinitionIndex = 5169;

	struct alignas(4) GUIClip_ParentClipScope
	{
		::System::Boolean m_Disposed; // 0x10
		::System::Void _ctor(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_PARENTCLIPSCOPE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_PARENTCLIPSCOPE_DISPOSE_OFFSET))(this);
		}

	};
}
