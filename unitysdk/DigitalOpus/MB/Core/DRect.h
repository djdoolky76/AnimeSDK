#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }

#define DIGITALOPUS_MB_CORE_DRECT_ENCLOSES_OFFSET UNITYSDK_OFFSET(0x98F570)
#define DIGITALOPUS_MB_CORE_DRECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x98F510)
#define DIGITALOPUS_MB_CORE_DRECT_EXPAND_OFFSET UNITYSDK_OFFSET(0x98F530)
#define DIGITALOPUS_MB_CORE_DRECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x98F610)
#define DIGITALOPUS_MB_CORE_DRECT_GETRECT_OFFSET UNITYSDK_OFFSET(0x98F450)
#define DIGITALOPUS_MB_CORE_DRECT_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x98F4F0)
#define DIGITALOPUS_MB_CORE_DRECT_GET_MAXD_OFFSET UNITYSDK_OFFSET(0x98F470)
#define DIGITALOPUS_MB_CORE_DRECT_GET_MAX_OFFSET UNITYSDK_OFFSET(0x98F490)
#define DIGITALOPUS_MB_CORE_DRECT_GET_MIND_OFFSET UNITYSDK_OFFSET(0x358710)
#define DIGITALOPUS_MB_CORE_DRECT_GET_MIN_OFFSET UNITYSDK_OFFSET(0x983EB0)
#define DIGITALOPUS_MB_CORE_DRECT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x98F4C0)
#define DIGITALOPUS_MB_CORE_DRECT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F93A1C0)
#define DIGITALOPUS_MB_CORE_DRECT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1F93A220)
#define DIGITALOPUS_MB_CORE_DRECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x98F520)
#define DIGITALOPUS_MB_CORE_DRECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x98F3E0)
#define DIGITALOPUS_MB_CORE_DRECT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x90BF00)
#define DIGITALOPUS_MB_CORE_DRECT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x98F430)
#define DIGITALOPUS_MB_CORE_DRECT__CTOR_4_OFFSET UNITYSDK_OFFSET(0x9036F0)
#define DIGITALOPUS_MB_CORE_DRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x98F3D0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int DRect_TypeDefinitionIndex = 96275;

	struct alignas(4) DRect
	{
		::System::Double x; // 0x10
		::System::Double y; // 0x18
		::System::Double width; // 0x20
		::System::Double height; // 0x28

		::System::Void _ctor(::UnityEngine::Rect r)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT__CTOR_OFFSET))(this, r);
		}

		::System::Void _ctor_1(::UnityEngine::Vector2 o, ::UnityEngine::Vector2 s)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT__CTOR_1_OFFSET))(this, o, s);
		}

		/*
		::System::Void _ctor_2(::DigitalOpus::MB::Core::DRect r)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::DRect))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT__CTOR_2_OFFSET))(this, r);
		}
		*/

		::System::Void _ctor_3(::System::Single xx, ::System::Single yy, ::System::Single w, ::System::Single h)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT__CTOR_3_OFFSET))(this, xx, yy, w, h);
		}

		::System::Void _ctor_4(::System::Double xx, ::System::Double yy, ::System::Double w, ::System::Double h)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT__CTOR_4_OFFSET))(this, xx, yy, w, h);
		}

		::UnityEngine::Rect GetRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT_GETRECT_OFFSET))(this);
		}

		/*
		::DigitalOpus::MB::Core::DVector2 get_minD()
		{
			return ((::DigitalOpus::MB::Core::DVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT_GET_MIND_OFFSET))(this);
		}
		*/

		/*
		::DigitalOpus::MB::Core::DVector2 get_maxD()
		{
			return ((::DigitalOpus::MB::Core::DVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT_GET_MAXD_OFFSET))(this);
		}
		*/

		::UnityEngine::Vector2 get_min()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT_GET_MIN_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_max()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT_GET_MAX_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_size()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT_GET_SIZE_OFFSET))(this);
		}

		/*
		::DigitalOpus::MB::Core::DVector2 get_center()
		{
			return ((::DigitalOpus::MB::Core::DVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT_GET_CENTER_OFFSET))(this);
		}
		*/

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT_EQUALS_OFFSET))(this, obj);
		}

		/*
		static ::System::Boolean op_Equality(::DigitalOpus::MB::Core::DRect a, ::DigitalOpus::MB::Core::DRect b)
		{
			return ((::System::Boolean(*)(::DigitalOpus::MB::Core::DRect, ::DigitalOpus::MB::Core::DRect))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT_OP_EQUALITY_OFFSET))(a, b);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::DigitalOpus::MB::Core::DRect a, ::DigitalOpus::MB::Core::DRect b)
		{
			return ((::System::Boolean(*)(::DigitalOpus::MB::Core::DRect, ::DigitalOpus::MB::Core::DRect))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT_OP_INEQUALITY_OFFSET))(a, b);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT_TOSTRING_OFFSET))(this);
		}

		::System::Void Expand(::System::Single amt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT_EXPAND_OFFSET))(this, amt);
		}

		/*
		::System::Boolean Encloses(::DigitalOpus::MB::Core::DRect smallToTestIfFits)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::DRect))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT_ENCLOSES_OFFSET))(this, smallToTestIfFits);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DRECT_GETHASHCODE_OFFSET))(this);
		}
	};
}
