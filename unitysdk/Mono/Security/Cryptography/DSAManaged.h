#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/DSA.h"
#include "unitysdk/System/Security/Cryptography/DSAParameters.h"

class BBB8A0ACE043BE4F;
namespace Mono::Security::Cryptography { class DSAManaged_FB20BEF60397E786; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_ADD_KEYGENERATED_OFFSET UNITYSDK_OFFSET(0x3C0E840)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_ADD_OFFSET UNITYSDK_OFFSET(0x3C0E8E0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C0CBA0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x3C0CE10)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x28F33C0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATEKEYPAIR_OFFSET UNITYSDK_OFFSET(0x3C0D240)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATEPARAMS_OFFSET UNITYSDK_OFFSET(0x3C0D350)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATE_OFFSET UNITYSDK_OFFSET(0x3C0DBF0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x3C0E9A0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x3C0E9D0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x3C0EA30)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x3C0DD30)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_NORMALIZEARRAY_OFFSET UNITYSDK_OFFSET(0x3C0E0E0)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_REMOVE_KEYGENERATED_OFFSET UNITYSDK_OFFSET(0x3C0EA70)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x3C0E190)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C0E680)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x3C0E760)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int DSAManaged_TypeDefinitionIndex = 11422;

	class DSAManaged : public ::System::Security::Cryptography::DSA
	{
	public:
		::System::Boolean keypairGenerated; // 0x20
		::System::Boolean m_disposed; // 0x21
		::System::Byte _padding0[0x6];
		::BBB8A0ACE043BE4F* p; // 0x28
		::BBB8A0ACE043BE4F* q; // 0x30
		::BBB8A0ACE043BE4F* g; // 0x38
		::BBB8A0ACE043BE4F* x; // 0x40
		::BBB8A0ACE043BE4F* y; // 0x48
		::BBB8A0ACE043BE4F* j; // 0x50
		::BBB8A0ACE043BE4F* seed; // 0x58
		::System::Int32 counter; // 0x60
		::System::Boolean j_missing; // 0x64
		::System::Byte _padding1[0x3];
		::System::Security::Cryptography::RandomNumberGenerator* rng; // 0x68
		::Mono::Security::Cryptography::DSAManaged_FB20BEF60397E786* KeyGenerated; // 0x70

		::System::Void Generate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATE_OFFSET))(this);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Void add_KeyGenerated(::Mono::Security::Cryptography::DSAManaged_FB20BEF60397E786* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::DSAManaged_FB20BEF60397E786*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_ADD_KEYGENERATED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void GenerateKeyPair()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATEKEYPAIR_OFFSET))(this);
		}

		::System::Security::Cryptography::RandomNumberGenerator* get_Random()
		{
			return ((::System::Security::Cryptography::RandomNumberGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_RANDOM_OFFSET))(this);
		}

		::System::Security::Cryptography::DSAParameters ExportParameters(::System::Boolean A8C4FBC67474989C)
		{
			return ((::System::Security::Cryptography::DSAParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_EXPORTPARAMETERS_OFFSET))(this, A8C4FBC67474989C);
		}

		::System::Void GenerateParams(::System::Int32 F71E90F958C7C1E7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GENERATEPARAMS_OFFSET))(this, F71E90F958C7C1E7);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::DSAParameters B652C74F012A9C5B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::DSAParameters))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_IMPORTPARAMETERS_OFFSET))(this, B652C74F012A9C5B);
		}

		::System::Void _ctor(::System::Int32 FA16943FB6D9A82A)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED__CTOR_OFFSET))(this, FA16943FB6D9A82A);
		}

		::System::Void add(::Il2CppArray<::System::Byte>* B35BBBE7E39341A2, ::Il2CppArray<::System::Byte>* AE40CAA6BBFEAD2C, ::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_ADD_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C, E937D4885DAA1AE8);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Byte>* BE3FA7EA2C29AE5D, ::Il2CppArray<::System::Byte>* E26A316C159F2DC9)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_VERIFYSIGNATURE_OFFSET))(this, BE3FA7EA2C29AE5D, E26A316C159F2DC9);
		}

		::System::Void remove_KeyGenerated(::Mono::Security::Cryptography::DSAManaged_FB20BEF60397E786* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Cryptography::DSAManaged_FB20BEF60397E786*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_REMOVE_KEYGENERATED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean get_PublicOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_GET_PUBLICONLY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* NormalizeArray(::Il2CppArray<::System::Byte>* EDF8D5B13A3EE433)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_NORMALIZEARRAY_OFFSET))(this, EDF8D5B13A3EE433);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_FINALIZE_OFFSET))(this);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED__CTOR_1_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean FB4A1BD5C4242BE9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_DISPOSE_OFFSET))(this, FB4A1BD5C4242BE9);
		}
	};
}
