#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Net { class CaseInsensitiveAscii; }

#define SYSTEM_NET_CASEINSENSITIVEASCII_CCTOR_OFFSET UNITYSDK_OFFSET(0x202D0340)
#define SYSTEM_NET_CASEINSENSITIVEASCII_COMPARE_OFFSET UNITYSDK_OFFSET(0x202CFE50)
#define SYSTEM_NET_CASEINSENSITIVEASCII_CTOR_OFFSET UNITYSDK_OFFSET(0x202D0330)
#define SYSTEM_NET_CASEINSENSITIVEASCII_EQUALS_OFFSET UNITYSDK_OFFSET(0x202D0190)
#define SYSTEM_NET_CASEINSENSITIVEASCII_FASTGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202D0090)
#define SYSTEM_NET_CASEINSENSITIVEASCII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202CFD50)

namespace System::Net
{
	inline static constexpr unsigned int CaseInsensitiveAscii_TypeDefinitionIndex = 2765;

	class CaseInsensitiveAscii : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_AsciiToLower()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("System.Net", "CaseInsensitiveAscii")->GetStaticField(0x2DBD0);
		}

		static ::System::Net::CaseInsensitiveAscii** StaticGet_StaticInstance()
		{
			return (::System::Net::CaseInsensitiveAscii**)UnitySDK::FromName("System.Net", "CaseInsensitiveAscii")->GetStaticField(0x2DBD8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII_CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII_GETHASHCODE_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Int32 FastGetHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII_FASTGETHASHCODE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII_EQUALS_OFFSET))(this, a1, a2);
		}

	};
}
