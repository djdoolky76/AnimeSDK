#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Version_VersionResult.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Version; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_VERSION_APPENDPOSITIVENUMBER_OFFSET UNITYSDK_OFFSET(0x1D3170B0)
#define SYSTEM_VERSION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D317C70)
#define SYSTEM_VERSION_CLONE_OFFSET UNITYSDK_OFFSET(0x1D316260)
#define SYSTEM_VERSION_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x1D316400)
#define SYSTEM_VERSION_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1D316290)
#define SYSTEM_VERSION_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D315F30)
#define SYSTEM_VERSION_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D316040)
#define SYSTEM_VERSION_CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D3160E0)
#define SYSTEM_VERSION_CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D316210)
#define SYSTEM_VERSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D315E10)
#define SYSTEM_VERSION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D316520)
#define SYSTEM_VERSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D316490)
#define SYSTEM_VERSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D3165A0)
#define SYSTEM_VERSION_GET_BUILD_OFFSET UNITYSDK_OFFSET(0x1D316240)
#define SYSTEM_VERSION_GET_MAJOR_OFFSET UNITYSDK_OFFSET(0x1D316220)
#define SYSTEM_VERSION_GET_MINOR_OFFSET UNITYSDK_OFFSET(0x1D316230)
#define SYSTEM_VERSION_GET_REVISION_OFFSET UNITYSDK_OFFSET(0x1D316250)
#define SYSTEM_VERSION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D316380)
#define SYSTEM_VERSION_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1D317C30)
#define SYSTEM_VERSION_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1D317BF0)
#define SYSTEM_VERSION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D3179D0)
#define SYSTEM_VERSION_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1D317B30)
#define SYSTEM_VERSION_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1D317A70)
#define SYSTEM_VERSION_PARSE_OFFSET UNITYSDK_OFFSET(0x1D316140)
#define SYSTEM_VERSION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1D316600)
#define SYSTEM_VERSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D3165D0)
#define SYSTEM_VERSION_TRYPARSECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D317850)
#define SYSTEM_VERSION_TRYPARSEVERSION_OFFSET UNITYSDK_OFFSET(0x1D317140)

namespace System
{
	inline static constexpr unsigned int Version_TypeDefinitionIndex = 364;

	class Version : public ::System::Object
	{
	public:
		::System::Int32 _Major; // 0x10
		::System::Int32 _Minor; // 0x14
		::System::Int32 _Build; // 0x18
		::System::Int32 _Revision; // 0x1C
		static ::Il2CppArray<::System::Char>** StaticGet_SeparatorsArray()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System", "Version")->GetStaticField(0x2A330);
		}

		// static const ::System::Object ZERO_CHAR_VALUE; // 0x0
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_CTOR_4_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_VERSION_CCTOR_OFFSET))();
		}

		::System::Int32 get_Major()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GET_MAJOR_OFFSET))(this);
		}

		::System::Int32 get_Minor()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GET_MINOR_OFFSET))(this);
		}

		::System::Int32 get_Build()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GET_BUILD_OFFSET))(this);
		}

		::System::Int32 get_Revision()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GET_REVISION_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_CLONE_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo_1(::System::Version* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_COMPARETO_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Version* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TOSTRING_1_OFFSET))(this, a1);
		}

		static ::System::Void AppendPositiveNumber(::System::Int32 a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_APPENDPOSITIVENUMBER_OFFSET))(a1, a2);
		}

		static ::System::Version* Parse(::System::String* a1)
		{
			return ((::System::Version*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_PARSE_OFFSET))(a1);
		}

		static ::System::Boolean TryParseVersion(::System::String* a1, ::System::Version_VersionResult a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Version_VersionResult))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TRYPARSEVERSION_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParseComponent(::System::String* a1, ::System::String* a2, ::System::Version_VersionResult a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Version_VersionResult, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TRYPARSECOMPONENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean op_Equality(::System::Version* a1, ::System::Version* a2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Version* a1, ::System::Version* a2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::System::Version* a1, ::System::Version* a2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::System::Version* a1, ::System::Version* a2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::System::Version* a1, ::System::Version* a2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::System::Version* a1, ::System::Version* a2)
		{
			return ((::System::Boolean(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}

	};
}
