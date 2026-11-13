#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Navigation_Mode.h"
namespace UnityEngine::UI { class Selectable; }

#define UNITYENGINE_UI_NAVIGATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E02B80)
#define UNITYENGINE_UI_NAVIGATION_GET_DEFAULTNAVIGATION_OFFSET UNITYSDK_OFFSET(0x18574F10)
#define UNITYENGINE_UI_NAVIGATION_GET_MODE_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONDOWN_OFFSET UNITYSDK_OFFSET(0x6C9390)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONLEFT_OFFSET UNITYSDK_OFFSET(0x7F5730)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONRIGHT_OFFSET UNITYSDK_OFFSET(0x7F6810)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONUP_OFFSET UNITYSDK_OFFSET(0x6C95B0)
#define UNITYENGINE_UI_NAVIGATION_SET_MODE_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONDOWN_OFFSET UNITYSDK_OFFSET(0xFDBF90)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONLEFT_OFFSET UNITYSDK_OFFSET(0x3D6A850)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONRIGHT_OFFSET UNITYSDK_OFFSET(0x3D6A860)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONUP_OFFSET UNITYSDK_OFFSET(0xB88D90)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Navigation_TypeDefinitionIndex = 6810;

	struct alignas(8) Navigation
	{
		::UnityEngine::UI::Navigation_Mode m_Mode; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::UI::Selectable* m_SelectOnUp; // 0x18
		::UnityEngine::UI::Selectable* m_SelectOnDown; // 0x20
		::UnityEngine::UI::Selectable* m_SelectOnLeft; // 0x28
		::UnityEngine::UI::Selectable* m_SelectOnRight; // 0x30
		::UnityEngine::UI::Navigation_Mode get_mode()
		{
			return ((::UnityEngine::UI::Navigation_Mode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::UI::Navigation_Mode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Navigation_Mode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_MODE_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Selectable* get_selectOnUp()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONUP_OFFSET))(this);
		}

		::System::Void set_selectOnUp(::UnityEngine::UI::Selectable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONUP_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Selectable* get_selectOnDown()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONDOWN_OFFSET))(this);
		}

		::System::Void set_selectOnDown(::UnityEngine::UI::Selectable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONDOWN_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Selectable* get_selectOnLeft()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONLEFT_OFFSET))(this);
		}

		::System::Void set_selectOnLeft(::UnityEngine::UI::Selectable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONLEFT_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Selectable* get_selectOnRight()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONRIGHT_OFFSET))(this);
		}

		::System::Void set_selectOnRight(::UnityEngine::UI::Selectable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONRIGHT_OFFSET))(this, a1);
		}

		/*
		static ::UnityEngine::UI::Navigation get_defaultNavigation()
		{
			return ((::UnityEngine::UI::Navigation(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_DEFAULTNAVIGATION_OFFSET))();
		}
		*/

		/*
		::System::Boolean Equals(::UnityEngine::UI::Navigation a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Navigation))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_EQUALS_OFFSET))(this, a1);
		}
		*/

	};
}
