#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define DIGITALOPUS_MB_CORE_DVECTOR2_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1F6B9550)
#define DIGITALOPUS_MB_CORE_DVECTOR2_GETVECTOR2_OFFSET UNITYSDK_OFFSET(0x983EB0)
#define DIGITALOPUS_MB_CORE_DVECTOR2_ISCONTAINEDINWITHMARGIN_OFFSET UNITYSDK_OFFSET(0x983F20)
#define DIGITALOPUS_MB_CORE_DVECTOR2_ISCONTAINEDIN_OFFSET UNITYSDK_OFFSET(0x983EE0)
#define DIGITALOPUS_MB_CORE_DVECTOR2_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1F6B91A0)
#define DIGITALOPUS_MB_CORE_DVECTOR2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x984000)
#define DIGITALOPUS_MB_CORE_DVECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x983F50)
#define DIGITALOPUS_MB_CORE_DVECTOR2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6B9580)
#define DIGITALOPUS_MB_CORE_DVECTOR2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x358470)
#define DIGITALOPUS_MB_CORE_DVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x902120)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int DVector2_TypeDefinitionIndex = 96274;

	struct alignas(4) DVector2
	{
		static ::System::Double* StaticGet_epsilon()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(DVector2_TypeDefinitionIndex)->GetStaticField(0x14060);
		}
		::System::Double x; // 0x10
		::System::Double y; // 0x18

		::System::Void _ctor(::System::Double xx, ::System::Double yy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DVECTOR2__CTOR_OFFSET))(this, xx, yy);
		}

		/*
		::System::Void _ctor_1(::DigitalOpus::MB::Core::DVector2 r)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::DVector2))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DVECTOR2__CTOR_1_OFFSET))(this, r);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DVECTOR2__CCTOR_OFFSET))();
		}

		/*
		static ::DigitalOpus::MB::Core::DVector2 Subtract(::DigitalOpus::MB::Core::DVector2 a, ::DigitalOpus::MB::Core::DVector2 b)
		{
			return ((::DigitalOpus::MB::Core::DVector2(*)(::DigitalOpus::MB::Core::DVector2, ::DigitalOpus::MB::Core::DVector2))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DVECTOR2_SUBTRACT_OFFSET))(a, b);
		}
		*/

		::UnityEngine::Vector2 GetVector2()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DVECTOR2_GETVECTOR2_OFFSET))(this);
		}

		/*
		::System::Boolean IsContainedIn(::DigitalOpus::MB::Core::DRect r)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::DRect))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DVECTOR2_ISCONTAINEDIN_OFFSET))(this, r);
		}
		*/

		/*
		::System::Boolean IsContainedInWithMargin(::DigitalOpus::MB::Core::DRect r)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::DRect))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DVECTOR2_ISCONTAINEDINWITHMARGIN_OFFSET))(this, r);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DVECTOR2_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* formatS)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DVECTOR2_TOSTRING_1_OFFSET))(this, formatS);
		}

		/*
		static ::System::Double Distance(::DigitalOpus::MB::Core::DVector2 a, ::DigitalOpus::MB::Core::DVector2 b)
		{
			return ((::System::Double(*)(::DigitalOpus::MB::Core::DVector2, ::DigitalOpus::MB::Core::DVector2))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_DVECTOR2_DISTANCE_OFFSET))(a, b);
		}
		*/
	};
}
