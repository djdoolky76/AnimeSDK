#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class HashAlgorithm; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_COMPARE_OFFSET UNITYSDK_OFFSET(0x3B3A8D0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_CREATEFROMNAME_OFFSET UNITYSDK_OFFSET(0x3B3A980)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_CREATEFROMOID_OFFSET UNITYSDK_OFFSET(0x3B3AE00)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_ENCODE_V15_OFFSET UNITYSDK_OFFSET(0x3B3AE60)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_HASHNAMEFROMOID_OFFSET UNITYSDK_OFFSET(0x3B3B1F0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_I2OSP_OFFSET UNITYSDK_OFFSET(0x3B3B550)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_OS2IP_OFFSET UNITYSDK_OFFSET(0x3B3B5D0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_RSAVP1_OFFSET UNITYSDK_OFFSET(0x3B3B6A0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_VERIFY_V15_OFFSET UNITYSDK_OFFSET(0x3B3B6D0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217__CCTOR_OFFSET UNITYSDK_OFFSET(0x3B3BA60)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int PKCS1_C9F11ACDB1B0C217_TypeDefinitionIndex = 19342;

	class PKCS1_C9F11ACDB1B0C217 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA1()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS1_C9F11ACDB1B0C217_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA256()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS1_C9F11ACDB1B0C217_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA384()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS1_C9F11ACDB1B0C217_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_emptySHA512()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PKCS1_C9F11ACDB1B0C217_TypeDefinitionIndex)->GetStaticField(0x18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217__CCTOR_OFFSET))();
		}

		static ::System::String* HashNameFromOid(::System::String* E91257C7E44715B6, ::System::Boolean F931B6181DE159D1)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_HASHNAMEFROMOID_OFFSET))(E91257C7E44715B6, F931B6181DE159D1);
		}

		static ::System::Boolean Verify_v15(::System::Security::Cryptography::RSA* FC17E705F01EA4DC, ::System::Security::Cryptography::HashAlgorithm* ED6B739E3493B1E8, ::Il2CppArray<::System::Byte>* BF6E9880E0FFEC4B, ::Il2CppArray<::System::Byte>* ADA902CFC22F5C58, ::System::Boolean FD61BEFAA5DF5DE9)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_VERIFY_V15_OFFSET))(FC17E705F01EA4DC, ED6B739E3493B1E8, BF6E9880E0FFEC4B, ADA902CFC22F5C58, FD61BEFAA5DF5DE9);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* I2OSP(::Il2CppArray<::System::Byte>* BB8C609F76620E45, ::System::Int32 F54AF627638DE3C9)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_I2OSP_OFFSET))(BB8C609F76620E45, F54AF627638DE3C9);
		}

		static ::Il2CppArray<::System::Byte>* OS2IP(::Il2CppArray<::System::Byte>* BB8C609F76620E45)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_OS2IP_OFFSET))(BB8C609F76620E45);
		}

		static ::Il2CppArray<::System::Byte>* RSAVP1(::System::Security::Cryptography::RSA* FC17E705F01EA4DC, ::Il2CppArray<::System::Byte>* B9AEC57275825552)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_RSAVP1_OFFSET))(FC17E705F01EA4DC, B9AEC57275825552);
		}

		static ::System::Boolean Compare(::Il2CppArray<::System::Byte>* A4F1E8AE2EAC885C, ::Il2CppArray<::System::Byte>* F0DD69B27EFAB788)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_COMPARE_OFFSET))(A4F1E8AE2EAC885C, F0DD69B27EFAB788);
		}

		static ::System::Security::Cryptography::HashAlgorithm* CreateFromOid(::System::String* E91257C7E44715B6)
		{
			return ((::System::Security::Cryptography::HashAlgorithm*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_CREATEFROMOID_OFFSET))(E91257C7E44715B6);
		}

		static ::System::Security::Cryptography::HashAlgorithm* CreateFromName(::System::String* F79B4D487F303AB2)
		{
			return ((::System::Security::Cryptography::HashAlgorithm*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_CREATEFROMNAME_OFFSET))(F79B4D487F303AB2);
		}

		static ::Il2CppArray<::System::Byte>* Encode_v15(::System::Security::Cryptography::HashAlgorithm* ED6B739E3493B1E8, ::Il2CppArray<::System::Byte>* BF6E9880E0FFEC4B, ::System::Int32 E3A4851F3A74CE71)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::HashAlgorithm*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS1_C9F11ACDB1B0C217_ENCODE_V15_OFFSET))(ED6B739E3493B1E8, BF6E9880E0FFEC4B, E3A4851F3A74CE71);
		}
	};
}
