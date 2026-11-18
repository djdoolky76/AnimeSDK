#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_GUICLIP_CLIPTOWINDOW_OFFSET UNITYSDK_OFFSET(0x1E6E7E70)
#define UNITYENGINE_GUICLIP_CLIPTOWINDOW_VECTOR2_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E6E7E10)
#define UNITYENGINE_GUICLIP_CLIPTOWINDOW_VECTOR2_OFFSET UNITYSDK_OFFSET(0x1E6E7DE0)
#define UNITYENGINE_GUICLIP_GETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E6E7E20)
#define UNITYENGINE_GUICLIP_GETMATRIX_OFFSET UNITYSDK_OFFSET(0x1E6E01A0)
#define UNITYENGINE_GUICLIP_GET_TOPMOSTRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E6E7D80)
#define UNITYENGINE_GUICLIP_GET_TOPMOSTRECT_OFFSET UNITYSDK_OFFSET(0x1E6E7D50)
#define UNITYENGINE_GUICLIP_GET_VISIBLERECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E6E7D40)
#define UNITYENGINE_GUICLIP_GET_VISIBLERECT_OFFSET UNITYSDK_OFFSET(0x1E6E3490)
#define UNITYENGINE_GUICLIP_INTERNAL_GETCOUNT_OFFSET UNITYSDK_OFFSET(0x1E6E7DD0)
#define UNITYENGINE_GUICLIP_INTERNAL_POPPARENTCLIP_OFFSET UNITYSDK_OFFSET(0x1E6E7E60)
#define UNITYENGINE_GUICLIP_INTERNAL_POP_OFFSET UNITYSDK_OFFSET(0x1E6E4F20)
#define UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E6E7E50)
#define UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_OFFSET UNITYSDK_OFFSET(0x1E6E7E40)
#define UNITYENGINE_GUICLIP_INTERNAL_PUSH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E6E7DC0)
#define UNITYENGINE_GUICLIP_INTERNAL_PUSH_OFFSET UNITYSDK_OFFSET(0x1E6E7D90)
#define UNITYENGINE_GUICLIP_POP_OFFSET UNITYSDK_OFFSET(0x1E6E6770)
#define UNITYENGINE_GUICLIP_PUSH_OFFSET UNITYSDK_OFFSET(0x1E6E4E70)
#define UNITYENGINE_GUICLIP_SETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E6E7E30)
#define UNITYENGINE_GUICLIP_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x1E6E0240)
#define UNITYENGINE_GUICLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E7EA0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIClip_TypeDefinitionIndex = 6412;

	class GUIClip : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Rect get_visibleRect()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GET_VISIBLERECT_OFFSET))();
		}

		static ::UnityEngine::Rect get_topmostRect()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GET_TOPMOSTRECT_OFFSET))();
		}

		static ::System::Void Internal_Push(::UnityEngine::Rect screenRect, ::UnityEngine::Vector2 scrollOffset, ::UnityEngine::Vector2 renderOffset, ::System::Boolean resetOffset)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_PUSH_OFFSET))(screenRect, scrollOffset, renderOffset, resetOffset);
		}

		static ::System::Void Internal_Pop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_POP_OFFSET))();
		}

		static ::System::Int32 Internal_GetCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_GETCOUNT_OFFSET))();
		}

		static ::UnityEngine::Vector2 ClipToWindow_Vector2(::UnityEngine::Vector2 absolutePos)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_CLIPTOWINDOW_VECTOR2_OFFSET))(absolutePos);
		}

		static ::UnityEngine::Matrix4x4 GetMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GETMATRIX_OFFSET))();
		}

		static ::System::Void SetMatrix(::UnityEngine::Matrix4x4 m)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_SETMATRIX_OFFSET))(m);
		}

		static ::System::Void Internal_PushParentClip(::UnityEngine::Matrix4x4 objectTransform, ::UnityEngine::Rect clipRect)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_OFFSET))(objectTransform, clipRect);
		}

		static ::System::Void Internal_PopParentClip()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_POPPARENTCLIP_OFFSET))();
		}

		static ::System::Void Push(::UnityEngine::Rect screenRect, ::UnityEngine::Vector2 scrollOffset, ::UnityEngine::Vector2 renderOffset, ::System::Boolean resetOffset)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_PUSH_OFFSET))(screenRect, scrollOffset, renderOffset, resetOffset);
		}

		static ::System::Void Pop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_POP_OFFSET))();
		}

		static ::UnityEngine::Vector2 ClipToWindow(::UnityEngine::Vector2 absolutePos)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_CLIPTOWINDOW_OFFSET))(absolutePos);
		}

		static ::System::Void get_visibleRect_Injected(::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GET_VISIBLERECT_INJECTED_OFFSET))(ret);
		}

		static ::System::Void get_topmostRect_Injected(::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GET_TOPMOSTRECT_INJECTED_OFFSET))(ret);
		}

		static ::System::Void Internal_Push_Injected(::UnityEngine::Rect& screenRect, ::UnityEngine::Vector2& scrollOffset, ::UnityEngine::Vector2& renderOffset, ::System::Boolean resetOffset)
		{
			return ((::System::Void(*)(::UnityEngine::Rect&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_PUSH_INJECTED_OFFSET))(screenRect, scrollOffset, renderOffset, resetOffset);
		}

		static ::System::Void ClipToWindow_Vector2_Injected(::UnityEngine::Vector2& absolutePos, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_CLIPTOWINDOW_VECTOR2_INJECTED_OFFSET))(absolutePos, ret);
		}

		static ::System::Void GetMatrix_Injected(::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GETMATRIX_INJECTED_OFFSET))(ret);
		}

		static ::System::Void SetMatrix_Injected(::UnityEngine::Matrix4x4& m)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_SETMATRIX_INJECTED_OFFSET))(m);
		}

		static ::System::Void Internal_PushParentClip_Injected(::UnityEngine::Matrix4x4& objectTransform, ::UnityEngine::Rect& clipRect)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_INJECTED_OFFSET))(objectTransform, clipRect);
		}
	};
}
