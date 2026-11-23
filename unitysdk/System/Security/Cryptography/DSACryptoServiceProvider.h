#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/DSA.h"
#include "unitysdk/System/Security/Cryptography/DSAParameters.h"

class E8C1635F85E9BC30;
namespace Mono::Security::Cryptography { class DSAManaged; }
namespace Mono::Security::Cryptography { class KeyPairPersistence; }
namespace System { class Object; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_COMMON_OFFSET UNITYSDK_OFFSET(0x3CA97F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3B9EE10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x3CA9A30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x28F33C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x3CA9C90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x3CA9CC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x3CA9B00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_ONKEYGENERATED_OFFSET UNITYSDK_OFFSET(0x3CA9B60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x3CA9BF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3CA9C60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x3CA9C20)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSACryptoServiceProvider_TypeDefinitionIndex = 10466;

	class DSACryptoServiceProvider : public ::System::Security::Cryptography::DSA
	{
	public:
		static ::System::Boolean* StaticGet_useMachineKeyStore()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DSACryptoServiceProvider_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Mono::Security::Cryptography::KeyPairPersistence* store; // 0x20
		::System::Boolean persistKey; // 0x28
		::System::Boolean persisted; // 0x29
		::System::Boolean privateKeyExportable; // 0x2A
		::System::Boolean m_disposed; // 0x2B
		::System::Byte _padding0[0x4];
		::Mono::Security::Cryptography::DSAManaged* dsa; // 0x30

		::System::Security::Cryptography::DSAParameters ExportParameters(::System::Boolean A8C4FBC67474989C)
		{
			return ((::System::Security::Cryptography::DSAParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_EXPORTPARAMETERS_OFFSET))(this, A8C4FBC67474989C);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Void OnKeyGenerated(::System::Object* AD0CAFBAFB8B01EA, ::E8C1635F85E9BC30* A5FB7225DA5C5A9B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::E8C1635F85E9BC30*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_ONKEYGENERATED_OFFSET))(this, AD0CAFBAFB8B01EA, A5FB7225DA5C5A9B);
		}

		::System::Void Dispose(::System::Boolean FB4A1BD5C4242BE9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_DISPOSE_OFFSET))(this, FB4A1BD5C4242BE9);
		}

		::System::Void Common(::System::Int32 FA16943FB6D9A82A, ::System::Boolean B652C74F012A9C5B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_COMMON_OFFSET))(this, FA16943FB6D9A82A, B652C74F012A9C5B);
		}

		::System::Void _ctor(::System::Int32 FA16943FB6D9A82A)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this, FA16943FB6D9A82A);
		}

		::System::Boolean get_PublicOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_GET_PUBLICONLY_OFFSET))(this);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::DSAParameters B652C74F012A9C5B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::DSAParameters))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_IMPORTPARAMETERS_OFFSET))(this, B652C74F012A9C5B);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_FINALIZE_OFFSET))(this);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Byte>* BE3FA7EA2C29AE5D, ::Il2CppArray<::System::Byte>* E26A316C159F2DC9)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER_VERIFYSIGNATURE_OFFSET))(this, BE3FA7EA2C29AE5D, E26A316C159F2DC9);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSACRYPTOSERVICEPROVIDER__CTOR_1_OFFSET))(this);
		}
	};
}
