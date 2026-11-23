#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/CspProviderFlags.h"
#include "unitysdk/System/Security/Cryptography/RSA.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithmName.h"
#include "unitysdk/System/Security/Cryptography/RSAParameters.h"

class E8C1635F85E9BC30;
namespace Mono::Security::Cryptography { class KeyPairPersistence; }
namespace Mono::Security::Cryptography { class RSAManaged; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography { class CspParameters; }
namespace System::Security::Cryptography { class HashAlgorithm; }
namespace System::Security::Cryptography { class RSAEncryptionPadding; }
namespace System::Security::Cryptography { class RSASignaturePadding; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_COMMON_1_OFFSET UNITYSDK_OFFSET(0x3B9E830)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_COMMON_OFFSET UNITYSDK_OFFSET(0x3B9E5C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x3B9E960)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPT_1_OFFSET UNITYSDK_OFFSET(0x3B9EA00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPT_OFFSET UNITYSDK_OFFSET(0x3B9EBB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3B9EE10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x3B9EE60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPT_1_OFFSET UNITYSDK_OFFSET(0x3B9EE90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x3B9EF50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x3B9F100)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x28F33C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETALGORITHMID_OFFSET UNITYSDK_OFFSET(0x3B9F2A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETHASHNAMEFROMOID_OFFSET UNITYSDK_OFFSET(0x3B9F440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x3BA04A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x3BA04D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_USEMACHINEKEYSTORE_OFFSET UNITYSDK_OFFSET(0x3BA04F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_HASHDATA_OFFSET UNITYSDK_OFFSET(0x3B9F5F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x3B9F650)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_INTERNALHASHTOHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x3B9F6B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ONKEYGENERATED_OFFSET UNITYSDK_OFFSET(0x3B9F780)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_PADDINGMODENOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x3B9F810)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYHASH_1_OFFSET UNITYSDK_OFFSET(0x3B9F880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYHASH_2_OFFSET UNITYSDK_OFFSET(0x3B9FD90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYHASH_OFFSET UNITYSDK_OFFSET(0x3B9FEC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BA0190)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3BA0470)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3BA0320)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x3BA01D0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSACryptoServiceProvider_TypeDefinitionIndex = 11141;

	class RSACryptoServiceProvider : public ::System::Security::Cryptography::RSA
	{
	public:
		static ::System::Security::Cryptography::CspProviderFlags* StaticGet_s_UseMachineKeyStore()
		{
			return (::System::Security::Cryptography::CspProviderFlags*)Il2CppClass::FromTypeDefinitionIndex(RSACryptoServiceProvider_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Mono::Security::Cryptography::KeyPairPersistence* store; // 0x20
		::System::Boolean persistKey; // 0x28
		::System::Boolean persisted; // 0x29
		::System::Boolean privateKeyExportable; // 0x2A
		::System::Boolean m_disposed; // 0x2B
		::System::Byte _padding0[0x4];
		::Mono::Security::Cryptography::RSAManaged* rsa; // 0x30

		::System::String* GetHashNameFromOID(::System::String* E91257C7E44715B6)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETHASHNAMEFROMOID_OFFSET))(this, E91257C7E44715B6);
		}

		static ::System::Int32 GetAlgorithmId(::System::Security::Cryptography::HashAlgorithmName B3B952005B4CCF8B)
		{
			return ((::System::Int32(*)(::System::Security::Cryptography::HashAlgorithmName))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GETALGORITHMID_OFFSET))(B3B952005B4CCF8B);
		}

		::Il2CppArray<::System::Byte>* HashData(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C, ::System::Int32 BE9B161B3F3C2937, ::System::Int32 A70E5C58B2C7A692, ::System::Security::Cryptography::HashAlgorithmName B3B952005B4CCF8B)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Security::Cryptography::HashAlgorithmName))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_HASHDATA_OFFSET))(this, F220A2D27F7C6B6C, BE9B161B3F3C2937, A70E5C58B2C7A692, B3B952005B4CCF8B);
		}

		::System::Boolean get_PublicOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_PUBLICONLY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* Encrypt(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C, ::System::Security::Cryptography::RSAEncryptionPadding* F5B33D06A6A6D3C1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPT_OFFSET))(this, F220A2D27F7C6B6C, F5B33D06A6A6D3C1);
		}

		::System::Void OnKeyGenerated(::System::Object* AD0CAFBAFB8B01EA, ::E8C1635F85E9BC30* A5FB7225DA5C5A9B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::E8C1635F85E9BC30*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ONKEYGENERATED_OFFSET))(this, AD0CAFBAFB8B01EA, A5FB7225DA5C5A9B);
		}

		::System::Void _ctor(::System::Int32 FA16943FB6D9A82A, ::System::Security::Cryptography::CspParameters* B652C74F012A9C5B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Security::Cryptography::CspParameters*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this, FA16943FB6D9A82A, B652C74F012A9C5B);
		}

		::System::Boolean VerifyHash(::Il2CppArray<::System::Byte>* BE3FA7EA2C29AE5D, ::System::String* BB83557721B5F386, ::Il2CppArray<::System::Byte>* E26A316C159F2DC9)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYHASH_OFFSET))(this, BE3FA7EA2C29AE5D, BB83557721B5F386, E26A316C159F2DC9);
		}

		::Il2CppArray<::System::Byte>* EncryptValue(::Il2CppArray<::System::Byte>* EFD90D39604601F6)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPTVALUE_OFFSET))(this, EFD90D39604601F6);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::RSAParameters B652C74F012A9C5B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSAParameters))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_IMPORTPARAMETERS_OFFSET))(this, B652C74F012A9C5B);
		}

		::System::Boolean VerifyHash_1(::Il2CppArray<::System::Byte>* ED6B739E3493B1E8, ::Il2CppArray<::System::Byte>* ADA902CFC22F5C58, ::System::Security::Cryptography::HashAlgorithmName B3B952005B4CCF8B, ::System::Security::Cryptography::RSASignaturePadding* F5B33D06A6A6D3C1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYHASH_1_OFFSET))(this, ED6B739E3493B1E8, ADA902CFC22F5C58, B3B952005B4CCF8B, F5B33D06A6A6D3C1);
		}

		::System::Boolean VerifyHash_2(::Il2CppArray<::System::Byte>* BE3FA7EA2C29AE5D, ::System::Int32 BC297AC4A9A4E57E, ::Il2CppArray<::System::Byte>* E26A316C159F2DC9)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_VERIFYHASH_2_OFFSET))(this, BE3FA7EA2C29AE5D, BC297AC4A9A4E57E, E26A316C159F2DC9);
		}

		::System::Security::Cryptography::RSAParameters ExportParameters(::System::Boolean A8C4FBC67474989C)
		{
			return ((::System::Security::Cryptography::RSAParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_EXPORTPARAMETERS_OFFSET))(this, A8C4FBC67474989C);
		}

		::Il2CppArray<::System::Byte>* DecryptValue(::Il2CppArray<::System::Byte>* EFD90D39604601F6)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPTVALUE_OFFSET))(this, EFD90D39604601F6);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_FINALIZE_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 FA16943FB6D9A82A)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_1_OFFSET))(this, FA16943FB6D9A82A);
		}

		::System::Void Common(::System::Int32 FA16943FB6D9A82A, ::System::Boolean B652C74F012A9C5B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_COMMON_OFFSET))(this, FA16943FB6D9A82A, B652C74F012A9C5B);
		}

		static ::System::Exception* PaddingModeNotSupported()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_PADDINGMODENOTSUPPORTED_OFFSET))();
		}

		::System::Void Dispose(::System::Boolean FB4A1BD5C4242BE9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DISPOSE_OFFSET))(this, FB4A1BD5C4242BE9);
		}

		static ::System::Boolean get_UseMachineKeyStore()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_USEMACHINEKEYSTORE_OFFSET))();
		}

		::System::Void Common_1(::System::Security::Cryptography::CspParameters* B5459FABA90E20BD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CspParameters*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_COMMON_1_OFFSET))(this, B5459FABA90E20BD);
		}

		::Il2CppArray<::System::Byte>* Encrypt_1(::Il2CppArray<::System::Byte>* EFD90D39604601F6, ::System::Boolean EB362D49FD9CA5A0)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_ENCRYPT_1_OFFSET))(this, EFD90D39604601F6, EB362D49FD9CA5A0);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_2_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* Decrypt(::Il2CppArray<::System::Byte>* EFD90D39604601F6, ::System::Boolean EB362D49FD9CA5A0)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPT_OFFSET))(this, EFD90D39604601F6, EB362D49FD9CA5A0);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Void _ctor_3(::System::Security::Cryptography::CspParameters* B652C74F012A9C5B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CspParameters*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER__CTOR_3_OFFSET))(this, B652C74F012A9C5B);
		}

		::Il2CppArray<::System::Byte>* Decrypt_1(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C, ::System::Security::Cryptography::RSAEncryptionPadding* F5B33D06A6A6D3C1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_DECRYPT_1_OFFSET))(this, F220A2D27F7C6B6C, F5B33D06A6A6D3C1);
		}

		static ::System::Security::Cryptography::HashAlgorithm* InternalHashToHashAlgorithm(::System::Int32 BC297AC4A9A4E57E)
		{
			return ((::System::Security::Cryptography::HashAlgorithm*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSACRYPTOSERVICEPROVIDER_INTERNALHASHTOHASHALGORITHM_OFFSET))(BC297AC4A9A4E57E);
		}
	};
}
