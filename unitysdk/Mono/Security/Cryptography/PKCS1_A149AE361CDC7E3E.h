#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Security::Cryptography { class HashAlgorithm; }

#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_A149AE361CDC7E3E_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C001FA0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_A149AE361CDC7E3E_CREATEFROMNAME_OFFSET UNITYSDK_OFFSET(0x1C001B50)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int PKCS1_A149AE361CDC7E3E_TypeDefinitionIndex = 2306;

	class PKCS1_A149AE361CDC7E3E : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA1()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.Cryptography", "PKCS1")->GetStaticField(0x25490);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA384()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.Cryptography", "PKCS1")->GetStaticField(0x25498);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA256()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.Cryptography", "PKCS1")->GetStaticField(0x254A0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA512()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.Cryptography", "PKCS1")->GetStaticField(0x254A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_A149AE361CDC7E3E_CCTOR_OFFSET))();
		}

		static ::System::Security::Cryptography::HashAlgorithm* CreateFromName(::System::String* a1)
		{
			return ((::System::Security::Cryptography::HashAlgorithm*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_A149AE361CDC7E3E_CREATEFROMNAME_OFFSET))(a1);
		}

	};
}
