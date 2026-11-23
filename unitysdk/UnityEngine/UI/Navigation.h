#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Navigation_F2C66747C5AEE2D8.h"

namespace UnityEngine::UI { class Selectable; }

#define UNITYENGINE_UI_NAVIGATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x43A2A80)
#define UNITYENGINE_UI_NAVIGATION_GET_DEFAULTNAVIGATION_OFFSET UNITYSDK_OFFSET(0x43A2B90)
#define UNITYENGINE_UI_NAVIGATION_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1EAE1A0)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONDOWN_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONLEFT_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONRIGHT_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define UNITYENGINE_UI_NAVIGATION_GET_SELECTONUP_OFFSET UNITYSDK_OFFSET(0x21A2B90)
#define UNITYENGINE_UI_NAVIGATION_GET_WRAPAROUND_OFFSET UNITYSDK_OFFSET(0x2D64990)
#define UNITYENGINE_UI_NAVIGATION_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1EAE190)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONDOWN_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONLEFT_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONRIGHT_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define UNITYENGINE_UI_NAVIGATION_SET_SELECTONUP_OFFSET UNITYSDK_OFFSET(0x2064C00)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Navigation_TypeDefinitionIndex = 18546;

	struct alignas(8) Navigation
	{
		::UnityEngine::UI::Navigation_F2C66747C5AEE2D8 m_Mode; // 0x10
		::System::Boolean m_WrapAround; // 0x14
		::System::Byte _padding0[0x3];
		::UnityEngine::UI::Selectable* m_SelectOnUp; // 0x18
		::UnityEngine::UI::Selectable* m_SelectOnDown; // 0x20
		::UnityEngine::UI::Selectable* m_SelectOnLeft; // 0x28
		::UnityEngine::UI::Selectable* m_SelectOnRight; // 0x30

		::System::Void set_selectOnUp(::UnityEngine::UI::Selectable* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONUP_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_selectOnRight(::UnityEngine::UI::Selectable* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONRIGHT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::UI::Navigation_F2C66747C5AEE2D8 get_mode()
		{
			return ((::UnityEngine::UI::Navigation_F2C66747C5AEE2D8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_MODE_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* get_selectOnRight()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONRIGHT_OFFSET))(this);
		}

		::System::Void set_selectOnDown(::UnityEngine::UI::Selectable* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONDOWN_OFFSET))(this, E937D4885DAA1AE8);
		}

		/*
		::System::Boolean Equals(::UnityEngine::UI::Navigation BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Navigation))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_EQUALS_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::System::Boolean get_wrapAround()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_WRAPAROUND_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::UI::Navigation_F2C66747C5AEE2D8 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Navigation_F2C66747C5AEE2D8))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_MODE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::UI::Selectable* get_selectOnDown()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONDOWN_OFFSET))(this);
		}

		/*
		static ::UnityEngine::UI::Navigation get_defaultNavigation()
		{
			return ((::UnityEngine::UI::Navigation(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_DEFAULTNAVIGATION_OFFSET))();
		}
		*/

		::System::Void set_selectOnLeft(::UnityEngine::UI::Selectable* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_SET_SELECTONLEFT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::UI::Selectable* get_selectOnUp()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONUP_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* get_selectOnLeft()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_NAVIGATION_GET_SELECTONLEFT_OFFSET))(this);
		}
	};
}
