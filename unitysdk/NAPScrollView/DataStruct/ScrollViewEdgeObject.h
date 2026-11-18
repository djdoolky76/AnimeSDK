#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class LayoutElement; }

#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_ENSUREDUMMY_OFFSET UNITYSDK_OFFSET(0x12FD4370)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_GETEDGESIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x12FD4D30)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x12FD3FA0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12FD3B50)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_ISDUMMY_OFFSET UNITYSDK_OFFSET(0x12FD3CE0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_ISVERTICAL_OFFSET UNITYSDK_OFFSET(0x12FD4EF0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_ONAPPEAR_OFFSET UNITYSDK_OFFSET(0x12FD3EE0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_ONDISAPPEAR_OFFSET UNITYSDK_OFFSET(0x12FD3F40)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_RECYCLE_OFFSET UNITYSDK_OFFSET(0x12FD4150)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_SETCALLBACKS_OFFSET UNITYSDK_OFFSET(0x12FD3E80)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_SETDUMMYACTIVE_OFFSET UNITYSDK_OFFSET(0x12FD49F0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FD3B40)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollViewEdgeObject_TypeDefinitionIndex = 91542;

	class ScrollViewEdgeObject : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* _dummyRt; // 0x10
		::System::Action* _onAppear; // 0x18
		::UnityEngine::GameObject* _go; // 0x20
		::UnityEngine::UI::LayoutElement* _dummyLe; // 0x28
		::System::Action* _onDisappear; // 0x30
		::System::Boolean _isStart; // 0x38
		::System::Boolean _recycled; // 0x39

		::System::Void _ctor(::UnityEngine::GameObject* go, ::System::Boolean isStart)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT__CTOR_OFFSET))(this, go, isStart);
		}

		::UnityEngine::RectTransform* get_RectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Boolean IsDummy(::UnityEngine::Transform* child)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_ISDUMMY_OFFSET))(this, child);
		}

		::System::Void SetCallbacks(::System::Action* onAppear, ::System::Action* onDisappear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_SETCALLBACKS_OFFSET))(this, onAppear, onDisappear);
		}

		::System::Void OnAppear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_ONAPPEAR_OFFSET))(this);
		}

		::System::Void OnDisappear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_ONDISAPPEAR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_Content()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_GET_CONTENT_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_RECYCLE_OFFSET))(this);
		}

		::System::Void EnsureDummy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_ENSUREDUMMY_OFFSET))(this);
		}

		::System::Void SetDummyActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_SETDUMMYACTIVE_OFFSET))(this, active);
		}

		::System::Boolean IsVertical()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_ISVERTICAL_OFFSET))(this);
		}

		::System::Single GetEdgeSizeAtAxis()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWEDGEOBJECT_GETEDGESIZEATAXIS_OFFSET))(this);
		}
	};
}
