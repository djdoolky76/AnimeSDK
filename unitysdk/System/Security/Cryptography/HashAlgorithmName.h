#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x240A900)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C17420)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C174B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA1_OFFSET UNITYSDK_OFFSET(0x3C17520)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA256_OFFSET UNITYSDK_OFFSET(0x3C17560)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA384_OFFSET UNITYSDK_OFFSET(0x3C175A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA512_OFFSET UNITYSDK_OFFSET(0x3C175E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x3C17620)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C174D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB3C0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HashAlgorithmName_TypeDefinitionIndex = 11428;

	struct alignas(8) HashAlgorithmName
	{
		::System::String* _name; // 0x10

		/*
		static ::System::Boolean op_Equality(::System::Security::Cryptography::HashAlgorithmName A11D4EC92205DAEE, ::System::Security::Cryptography::HashAlgorithmName F38046B0C91E49B1)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::HashAlgorithmName))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_OP_EQUALITY_OFFSET))(A11D4EC92205DAEE, F38046B0C91E49B1);
		}
		*/

		/*
		static ::System::Security::Cryptography::HashAlgorithmName get_SHA384()
		{
			return ((::System::Security::Cryptography::HashAlgorithmName(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA384_OFFSET))();
		}
		*/

		::System::Boolean Equals(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_EQUALS_OFFSET))(this, A86A90C31A146E9C);
		}

		/*
		static ::System::Security::Cryptography::HashAlgorithmName get_SHA256()
		{
			return ((::System::Security::Cryptography::HashAlgorithmName(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA256_OFFSET))();
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_TOSTRING_OFFSET))(this);
		}

		/*
		static ::System::Security::Cryptography::HashAlgorithmName get_SHA512()
		{
			return ((::System::Security::Cryptography::HashAlgorithmName(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA512_OFFSET))();
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GETHASHCODE_OFFSET))(this);
		}

		::System::Void _ctor(::System::String* F79B4D487F303AB2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME__CTOR_OFFSET))(this, F79B4D487F303AB2);
		}

		/*
		static ::System::Security::Cryptography::HashAlgorithmName get_SHA1()
		{
			return ((::System::Security::Cryptography::HashAlgorithmName(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_GET_SHA1_OFFSET))();
		}
		*/

		/*
		::System::Boolean Equals_1(::System::Security::Cryptography::HashAlgorithmName BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::HashAlgorithmName))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HASHALGORITHMNAME_EQUALS_1_OFFSET))(this, BEEE7A5A60941632);
		}
		*/
	};
}
