#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x81D5E0)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x81D5F0)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x408580)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_GET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x358A70)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x358A70)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x409330)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_GET_TOP_OFFSET UNITYSDK_OFFSET(0x411A70)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_GET_VERTICAL_OFFSET UNITYSDK_OFFSET(0x411A70)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1BF48220)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BF482B0)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BF48340)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BF48460)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_SET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x5F1740)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_SET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x81D510)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x358800)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x5C7520)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_SET_TOP_OFFSET UNITYSDK_OFFSET(0x5C7530)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET_SET_VERTICAL_OFFSET UNITYSDK_OFFSET(0x81D570)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF486B0)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x81D5D0)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x759E10)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x81D760)
#define UNITYENGINE_UI_EXTENSION_NAP_OFFSET___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x81D700)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_Offset_TypeDefinitionIndex = 68191;

	struct alignas(4) NAP_Offset
	{
		static ::UnityEngine::UI::Extension::NAP_Offset* StaticGet_k_ZeroOffset()
		{
			return (::UnityEngine::UI::Extension::NAP_Offset*)Il2CppClass::FromTypeDefinitionIndex(NAP_Offset_TypeDefinitionIndex)->GetStaticField(0xF680);
		}
		::System::Single m_Left; // 0x10
		::System::Single m_Right; // 0x14
		::System::Single m_Top; // 0x18
		::System::Single m_Bottom; // 0x1C

		::System::Void _ctor(::System::Single left, ::System::Single right, ::System::Single top, ::System::Single bottom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET__CTOR_OFFSET))(this, left, right, top, bottom);
		}

		::System::Void _ctor_1(::System::Single horizontal, ::System::Single vertical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET__CTOR_1_OFFSET))(this, horizontal, vertical);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET__CCTOR_OFFSET))();
		}

		::System::Single get_left()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_GET_LEFT_OFFSET))(this);
		}

		::System::Void set_left(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_SET_LEFT_OFFSET))(this, value);
		}

		::System::Single get_right()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_GET_RIGHT_OFFSET))(this);
		}

		::System::Void set_right(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_SET_RIGHT_OFFSET))(this, value);
		}

		::System::Single get_top()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_GET_TOP_OFFSET))(this);
		}

		::System::Void set_top(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_SET_TOP_OFFSET))(this, value);
		}

		::System::Single get_bottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_GET_BOTTOM_OFFSET))(this);
		}

		::System::Void set_bottom(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_SET_BOTTOM_OFFSET))(this, value);
		}

		::System::Single get_horizontal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_GET_HORIZONTAL_OFFSET))(this);
		}

		::System::Void set_horizontal(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_SET_HORIZONTAL_OFFSET))(this, value);
		}

		::System::Single get_vertical()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_GET_VERTICAL_OFFSET))(this);
		}

		::System::Void set_vertical(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_SET_VERTICAL_OFFSET))(this, value);
		}

		/*
		static ::UnityEngine::UI::Extension::NAP_Offset get_zero()
		{
			return ((::UnityEngine::UI::Extension::NAP_Offset(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_GET_ZERO_OFFSET))();
		}
		*/

		/*
		static ::System::Boolean op_Equality(::UnityEngine::UI::Extension::NAP_Offset lhs, ::UnityEngine::UI::Extension::NAP_Offset rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::Extension::NAP_Offset, ::UnityEngine::UI::Extension::NAP_Offset))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_OP_EQUALITY_OFFSET))(lhs, rhs);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::UnityEngine::UI::Extension::NAP_Offset lhs, ::UnityEngine::UI::Extension::NAP_Offset rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::Extension::NAP_Offset, ::UnityEngine::UI::Extension::NAP_Offset))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}
		*/

		/*
		static ::UnityEngine::UI::Extension::NAP_Offset op_Multiply(::UnityEngine::UI::Extension::NAP_Offset a, ::System::Single b)
		{
			return ((::UnityEngine::UI::Extension::NAP_Offset(*)(::UnityEngine::UI::Extension::NAP_Offset, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_OP_MULTIPLY_OFFSET))(a, b);
		}
		*/

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_OFFSET___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
