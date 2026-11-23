#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace System { class Object; }

#define UNITYENGINE_UI_COLORBLOCK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x43AC730)
#define UNITYENGINE_UI_COLORBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x43AC640)
#define UNITYENGINE_UI_COLORBLOCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x43ACA30)
#define UNITYENGINE_UI_COLORBLOCK_GET_COLORMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1CE2410)
#define UNITYENGINE_UI_COLORBLOCK_GET_DISABLEDCOLOR_OFFSET UNITYSDK_OFFSET(0x234C960)
#define UNITYENGINE_UI_COLORBLOCK_GET_FADEDURATION_OFFSET UNITYSDK_OFFSET(0x2326C20)
#define UNITYENGINE_UI_COLORBLOCK_GET_HIGHLIGHTEDCOLOR_OFFSET UNITYSDK_OFFSET(0x16BB200)
#define UNITYENGINE_UI_COLORBLOCK_GET_NORMALCOLOR_OFFSET UNITYSDK_OFFSET(0x2C106C0)
#define UNITYENGINE_UI_COLORBLOCK_GET_PRESSEDCOLOR_OFFSET UNITYSDK_OFFSET(0x1DC0A10)
#define UNITYENGINE_UI_COLORBLOCK_GET_SELECTEDCOLOR_OFFSET UNITYSDK_OFFSET(0x1DC0A00)
#define UNITYENGINE_UI_COLORBLOCK_SET_COLORMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1CE2540)
#define UNITYENGINE_UI_COLORBLOCK_SET_DISABLEDCOLOR_OFFSET UNITYSDK_OFFSET(0x2477000)
#define UNITYENGINE_UI_COLORBLOCK_SET_FADEDURATION_OFFSET UNITYSDK_OFFSET(0x2326C40)
#define UNITYENGINE_UI_COLORBLOCK_SET_HIGHLIGHTEDCOLOR_OFFSET UNITYSDK_OFFSET(0x1DC0A30)
#define UNITYENGINE_UI_COLORBLOCK_SET_NORMALCOLOR_OFFSET UNITYSDK_OFFSET(0x3250330)
#define UNITYENGINE_UI_COLORBLOCK_SET_PRESSEDCOLOR_OFFSET UNITYSDK_OFFSET(0x1DC0A40)
#define UNITYENGINE_UI_COLORBLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x43ACAC0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ColorBlock_TypeDefinitionIndex = 18571;

	struct alignas(4) ColorBlock
	{
		static ::UnityEngine::UI::ColorBlock* StaticGet_defaultColorBlock()
		{
			return (::UnityEngine::UI::ColorBlock*)Il2CppClass::FromTypeDefinitionIndex(ColorBlock_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::E46B881AA2636190 m_NormalColor; // 0x10
		::UnityEngine::E46B881AA2636190 m_HighlightedColor; // 0x20
		::UnityEngine::E46B881AA2636190 m_PressedColor; // 0x30
		::UnityEngine::E46B881AA2636190 m_SelectedColor; // 0x40
		::UnityEngine::E46B881AA2636190 m_DisabledColor; // 0x50
		::System::Single m_ColorMultiplier; // 0x60
		::System::Single m_FadeDuration; // 0x64

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GETHASHCODE_OFFSET))(this);
		}

		::System::Void set_normalColor(::UnityEngine::E46B881AA2636190 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_NORMALCOLOR_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::E46B881AA2636190 get_highlightedColor()
		{
			return ((::UnityEngine::E46B881AA2636190(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_HIGHLIGHTEDCOLOR_OFFSET))(this);
		}

		::System::Void set_highlightedColor(::UnityEngine::E46B881AA2636190 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_HIGHLIGHTEDCOLOR_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean Equals(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_EQUALS_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Single get_colorMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_COLORMULTIPLIER_OFFSET))(this);
		}

		::UnityEngine::E46B881AA2636190 get_normalColor()
		{
			return ((::UnityEngine::E46B881AA2636190(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_NORMALCOLOR_OFFSET))(this);
		}

		/*
		::System::Boolean Equals_1(::UnityEngine::UI::ColorBlock BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::ColorBlock))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_EQUALS_1_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::UnityEngine::E46B881AA2636190 get_disabledColor()
		{
			return ((::UnityEngine::E46B881AA2636190(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_DISABLEDCOLOR_OFFSET))(this);
		}

		::System::Void set_pressedColor(::UnityEngine::E46B881AA2636190 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_PRESSEDCOLOR_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_fadeDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_FADEDURATION_OFFSET))(this);
		}

		::System::Void set_fadeDuration(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_FADEDURATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_colorMultiplier(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_COLORMULTIPLIER_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::E46B881AA2636190 get_pressedColor()
		{
			return ((::UnityEngine::E46B881AA2636190(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_PRESSEDCOLOR_OFFSET))(this);
		}

		::UnityEngine::E46B881AA2636190 get_selectedColor()
		{
			return ((::UnityEngine::E46B881AA2636190(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_SELECTEDCOLOR_OFFSET))(this);
		}

		::System::Void set_disabledColor(::UnityEngine::E46B881AA2636190 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_DISABLEDCOLOR_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
