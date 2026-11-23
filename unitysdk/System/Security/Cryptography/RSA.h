#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricAlgorithm.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithmName.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Security::Cryptography { class RSAEncryptionPadding; }
namespace System::Security::Cryptography { class RSASignaturePadding; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_CREATE_OFFSET UNITYSDK_OFFSET(0x3D1FA50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DECRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x3D1FAA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DECRYPT_OFFSET UNITYSDK_OFFSET(0x3D1FB00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DERIVEDCLASSMUSTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x3D1FB30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_ENCRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x3D1FBA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x3D1FC00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_FROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x3D1FC30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_HASHALGORITHMNAMENULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x3D20260)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_HASHDATA_OFFSET UNITYSDK_OFFSET(0x3D202F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x3D20320)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYDATA_1_OFFSET UNITYSDK_OFFSET(0x3D206E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYDATA_OFFSET UNITYSDK_OFFSET(0x3D209B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYHASH_OFFSET UNITYSDK_OFFSET(0x3D20A50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSA_TypeDefinitionIndex = 10914;

	class RSA : public ::System::Security::Cryptography::AsymmetricAlgorithm
	{
	public:
		::System::Void FromXmlString(::System::String* ED4509AD4A414C3C)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_FROMXMLSTRING_OFFSET))(this, ED4509AD4A414C3C);
		}

		static ::System::Exception* DerivedClassMustOverride()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DERIVEDCLASSMUSTOVERRIDE_OFFSET))();
		}

		static ::System::Security::Cryptography::RSA* Create()
		{
			return ((::System::Security::Cryptography::RSA*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_CREATE_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA__CTOR_OFFSET))(this);
		}

		::System::Boolean VerifyHash(::Il2CppArray<::System::Byte>* ED6B739E3493B1E8, ::Il2CppArray<::System::Byte>* ADA902CFC22F5C58, ::System::Security::Cryptography::HashAlgorithmName B3B952005B4CCF8B, ::System::Security::Cryptography::RSASignaturePadding* F5B33D06A6A6D3C1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYHASH_OFFSET))(this, ED6B739E3493B1E8, ADA902CFC22F5C58, B3B952005B4CCF8B, F5B33D06A6A6D3C1);
		}

		::Il2CppArray<::System::Byte>* EncryptValue(::Il2CppArray<::System::Byte>* EFD90D39604601F6)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_ENCRYPTVALUE_OFFSET))(this, EFD90D39604601F6);
		}

		::Il2CppArray<::System::Byte>* HashData(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C, ::System::Int32 BE9B161B3F3C2937, ::System::Int32 A70E5C58B2C7A692, ::System::Security::Cryptography::HashAlgorithmName B3B952005B4CCF8B)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Security::Cryptography::HashAlgorithmName))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_HASHDATA_OFFSET))(this, F220A2D27F7C6B6C, BE9B161B3F3C2937, A70E5C58B2C7A692, B3B952005B4CCF8B);
		}

		::System::Boolean VerifyData(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C, ::Il2CppArray<::System::Byte>* ADA902CFC22F5C58, ::System::Security::Cryptography::HashAlgorithmName B3B952005B4CCF8B, ::System::Security::Cryptography::RSASignaturePadding* F5B33D06A6A6D3C1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYDATA_OFFSET))(this, F220A2D27F7C6B6C, ADA902CFC22F5C58, B3B952005B4CCF8B, F5B33D06A6A6D3C1);
		}

		::Il2CppArray<::System::Byte>* DecryptValue(::Il2CppArray<::System::Byte>* EFD90D39604601F6)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DECRYPTVALUE_OFFSET))(this, EFD90D39604601F6);
		}

		::System::Boolean VerifyData_1(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C, ::System::Int32 BE9B161B3F3C2937, ::System::Int32 A70E5C58B2C7A692, ::Il2CppArray<::System::Byte>* ADA902CFC22F5C58, ::System::Security::Cryptography::HashAlgorithmName B3B952005B4CCF8B, ::System::Security::Cryptography::RSASignaturePadding* F5B33D06A6A6D3C1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_VERIFYDATA_1_OFFSET))(this, F220A2D27F7C6B6C, BE9B161B3F3C2937, A70E5C58B2C7A692, ADA902CFC22F5C58, B3B952005B4CCF8B, F5B33D06A6A6D3C1);
		}

		::Il2CppArray<::System::Byte>* Encrypt(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C, ::System::Security::Cryptography::RSAEncryptionPadding* F5B33D06A6A6D3C1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_ENCRYPT_OFFSET))(this, F220A2D27F7C6B6C, F5B33D06A6A6D3C1);
		}

		::Il2CppArray<::System::Byte>* Decrypt(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C, ::System::Security::Cryptography::RSAEncryptionPadding* F5B33D06A6A6D3C1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DECRYPT_OFFSET))(this, F220A2D27F7C6B6C, F5B33D06A6A6D3C1);
		}

		static ::System::Exception* HashAlgorithmNameNullOrEmpty()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_HASHALGORITHMNAMENULLOREMPTY_OFFSET))();
		}

		::System::String* ToXmlString(::System::Boolean A8C4FBC67474989C)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TOXMLSTRING_OFFSET))(this, A8C4FBC67474989C);
		}
	};
}
