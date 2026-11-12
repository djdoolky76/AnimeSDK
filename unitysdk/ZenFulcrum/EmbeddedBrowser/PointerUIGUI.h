#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/PointerUIBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class BaseRaycaster; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class RawImage; }

#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_AWAKE_OFFSET UNITYSDK_OFFSET(0x20918DC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_CTOR_OFFSET UNITYSDK_OFFSET(0x20919620)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_GETCURRENTHITLOCATION_OFFSET UNITYSDK_OFFSET(0x20919450)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_GET_KEYBOARDHASFOCUS_OFFSET UNITYSDK_OFFSET(0x209194A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_GET_MOUSEHASFOCUS_OFFSET UNITYSDK_OFFSET(0x20919470)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_MAPPOINTERTOBROWSER_OFFSET UNITYSDK_OFFSET(0x209190E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_MAPRAYTOBROWSER_OFFSET UNITYSDK_OFFSET(0x20919420)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x20919530)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20918F70)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x209195B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x20919590)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x209195A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONSELECT_OFFSET UNITYSDK_OFFSET(0x209194C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_SET_MOUSEHASFOCUS_OFFSET UNITYSDK_OFFSET(0x20919490)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_UPDATETEXTURE_OFFSET UNITYSDK_OFFSET(0x20919030)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_WATCHRESIZE_OFFSET UNITYSDK_OFFSET(0x20918FD0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int PointerUIGUI_TypeDefinitionIndex = 40413;

	class PointerUIGUI : public ::ZenFulcrum::EmbeddedBrowser::PointerUIBase
	{
	public:
		::UnityEngine::UI::RawImage* myImage; // 0xB8
		::System::Boolean enableInput; // 0xC0
		::System::Boolean automaticResize; // 0xC1
		::System::Byte _padding0[0x6];
		::UnityEngine::EventSystems::BaseRaycaster* raycaster; // 0xC8
		::UnityEngine::RectTransform* rTransform; // 0xD0
		::System::Boolean _mouseHasFocus; // 0xD8
		::System::Boolean _keyboardHasFocus; // 0xD9
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONENABLE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* WatchResize()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_WATCHRESIZE_OFFSET))(this);
		}

		::System::Void UpdateTexture(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_UPDATETEXTURE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 MapPointerToBrowser(::UnityEngine::Vector2 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_MAPPOINTERTOBROWSER_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 MapRayToBrowser(::UnityEngine::Ray a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Ray, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_MAPRAYTOBROWSER_OFFSET))(this, a1, a2);
		}

		::System::Void GetCurrentHitLocation(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_GETCURRENTHITLOCATION_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_MouseHasFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_GET_MOUSEHASFOCUS_OFFSET))(this);
		}

		::System::Void set_MouseHasFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_SET_MOUSEHASFOCUS_OFFSET))(this, a1);
		}

		::System::Boolean get_KeyboardHasFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_GET_KEYBOARDHASFOCUS_OFFSET))(this);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONDESELECT_OFFSET))(this, a1);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONPOINTERDOWN_OFFSET))(this, a1);
		}

	};
}
