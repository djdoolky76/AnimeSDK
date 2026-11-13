#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_VERSIONINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x7CEC20)
#define INCONTROL_VERSIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x7CEBE0)
#define INCONTROL_VERSIONINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x7CEC70)
#define INCONTROL_VERSIONINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7CECF0)
#define INCONTROL_VERSIONINFO_GET_BUILD_OFFSET UNITYSDK_OFFSET(0x6C28C0)
#define INCONTROL_VERSIONINFO_GET_MAX_OFFSET UNITYSDK_OFFSET(0xC6B68D0)
#define INCONTROL_VERSIONINFO_GET_MIN_OFFSET UNITYSDK_OFFSET(0xC6B68C0)
#define INCONTROL_VERSIONINFO_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x7CEC00)
#define INCONTROL_VERSIONINFO_INCONTROLVERSION_OFFSET UNITYSDK_OFFSET(0xC6B64F0)
#define INCONTROL_VERSIONINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC6B6960)
#define INCONTROL_VERSIONINFO_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0xC6AC730)
#define INCONTROL_VERSIONINFO_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0xC6B6A00)
#define INCONTROL_VERSIONINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC6B6990)
#define INCONTROL_VERSIONINFO_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0xC6B69C0)
#define INCONTROL_VERSIONINFO_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0xC6AC6F0)
#define INCONTROL_VERSIONINFO_TOSHORTSTRING_OFFSET UNITYSDK_OFFSET(0x7CED20)
#define INCONTROL_VERSIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7CED10)
#define INCONTROL_VERSIONINFO_UNITYVERSION_OFFSET UNITYSDK_OFFSET(0xC6B6500)

namespace InControl
{
	inline static constexpr unsigned int VersionInfo_TypeDefinitionIndex = 41893;

	struct alignas(4) VersionInfo
	{
		::System::Int32 major; // 0x10
		::System::Int32 minor; // 0x14
		::System::Int32 patch; // 0x18
		::System::Int32 build; // 0x1C
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		/*
		static ::InControl::VersionInfo InControlVersion()
		{
			return ((::InControl::VersionInfo(*)())((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_INCONTROLVERSION_OFFSET))();
		}
		*/

		/*
		static ::InControl::VersionInfo UnityVersion()
		{
			return ((::InControl::VersionInfo(*)())((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_UNITYVERSION_OFFSET))();
		}
		*/

		/*
		static ::InControl::VersionInfo get_Min()
		{
			return ((::InControl::VersionInfo(*)())((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_GET_MIN_OFFSET))();
		}
		*/

		/*
		static ::InControl::VersionInfo get_Max()
		{
			return ((::InControl::VersionInfo(*)())((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_GET_MAX_OFFSET))();
		}
		*/

		/*
		::InControl::VersionInfo get_Next()
		{
			return ((::InControl::VersionInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_GET_NEXT_OFFSET))(this);
		}
		*/

		::System::Int32 get_Build()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_GET_BUILD_OFFSET))(this);
		}

		/*
		::System::Int32 CompareTo(::InControl::VersionInfo a1)
		{
			return ((::System::Int32(*)(::PVOID, ::InControl::VersionInfo))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_COMPARETO_OFFSET))(this, a1);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::InControl::VersionInfo a1, ::InControl::VersionInfo a2)
		{
			return ((::System::Boolean(*)(::InControl::VersionInfo, ::InControl::VersionInfo))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::InControl::VersionInfo a1, ::InControl::VersionInfo a2)
		{
			return ((::System::Boolean(*)(::InControl::VersionInfo, ::InControl::VersionInfo))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_LessThanOrEqual(::InControl::VersionInfo a1, ::InControl::VersionInfo a2)
		{
			return ((::System::Boolean(*)(::InControl::VersionInfo, ::InControl::VersionInfo))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThanOrEqual(::InControl::VersionInfo a1, ::InControl::VersionInfo a2)
		{
			return ((::System::Boolean(*)(::InControl::VersionInfo, ::InControl::VersionInfo))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_LessThan(::InControl::VersionInfo a1, ::InControl::VersionInfo a2)
		{
			return ((::System::Boolean(*)(::InControl::VersionInfo, ::InControl::VersionInfo))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_OP_LESSTHAN_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThan(::InControl::VersionInfo a1, ::InControl::VersionInfo a2)
		{
			return ((::System::Boolean(*)(::InControl::VersionInfo, ::InControl::VersionInfo))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_OP_GREATERTHAN_OFFSET))(a1, a2);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_TOSTRING_OFFSET))(this);
		}

		::System::String* ToShortString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_TOSHORTSTRING_OFFSET))(this);
		}

	};
}
