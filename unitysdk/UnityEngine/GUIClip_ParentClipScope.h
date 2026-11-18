#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"

#define UNITYENGINE_GUICLIP_PARENTCLIPSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90F8C0)
#define UNITYENGINE_GUICLIP_PARENTCLIPSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x90F870)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIClip_ParentClipScope_TypeDefinitionIndex = 6413;

	struct alignas(4) GUIClip_ParentClipScope
	{
		::System::Boolean m_Disposed; // 0x10

		::System::Void _ctor(::UnityEngine::Matrix4x4 objectTransform, ::UnityEngine::Rect clipRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_PARENTCLIPSCOPE__CTOR_OFFSET))(this, objectTransform, clipRect);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_PARENTCLIPSCOPE_DISPOSE_OFFSET))(this);
		}
	};
}
