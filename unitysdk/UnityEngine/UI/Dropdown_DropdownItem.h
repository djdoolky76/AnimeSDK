#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x207A3FB0)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x207A3F10)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x207A3F30)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x207A3EF0)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_TOGGLE_OFFSET UNITYSDK_OFFSET(0x207A3F50)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0x207A3F90)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x207A3F80)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x207A3F70)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x207A3F20)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x207A3F40)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x207A3F00)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_TOGGLE_OFFSET UNITYSDK_OFFSET(0x207A3F60)
#define UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0x207A3FA0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown_DropdownItem_TypeDefinitionIndex = 6719;

	class Dropdown_DropdownItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Text* m_Text; // 0x18
		::UnityEngine::UI::Image* m_Image; // 0x20
		::UnityEngine::RectTransform* m_RectTransform; // 0x28
		::UnityEngine::UI::Toggle* m_Toggle; // 0x30
		::System::Object* mUserObjectData; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Text* get_text()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_TEXT_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Image* get_image()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_IMAGE_OFFSET))(this);
		}

		::System::Void set_image(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_IMAGE_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_rectTransform(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_RECTTRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Toggle* get_toggle()
		{
			return ((::UnityEngine::UI::Toggle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_TOGGLE_OFFSET))(this);
		}

		::System::Void set_toggle(::UnityEngine::UI::Toggle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_TOGGLE_OFFSET))(this, a1);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_ONCANCEL_OFFSET))(this, a1);
		}

		::System::Object* get_UserObjectData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_GET_USEROBJECTDATA_OFFSET))(this);
		}

		::System::Void set_UserObjectData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_DROPDOWNITEM_SET_USEROBJECTDATA_OFFSET))(this, a1);
		}

	};
}
