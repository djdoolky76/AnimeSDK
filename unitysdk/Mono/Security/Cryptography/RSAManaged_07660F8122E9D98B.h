#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RSA.h"
#include "unitysdk/System/Security/Cryptography/RSAParameters.h"
namespace Mono::Math { class BigInteger_B63D07FB4865BEA1; }
namespace Mono::Security::Cryptography { class RSAManaged_07660F8122E9D98B_KeyGeneratedEventHandler; }

#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_07660F8122E9D98B_EXPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C0042B0)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_07660F8122E9D98B_GENERATEKEYPAIR_OFFSET UNITYSDK_OFFSET(0x1C003A90)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_07660F8122E9D98B_GETPADDEDVALUE_OFFSET UNITYSDK_OFFSET(0x1C004620)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_07660F8122E9D98B_GET_PUBLICONLY_OFFSET UNITYSDK_OFFSET(0x1C004220)
#define MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_07660F8122E9D98B_IMPORTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C0046A0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int RSAManaged_07660F8122E9D98B_TypeDefinitionIndex = 2311;

	class RSAManaged_07660F8122E9D98B : public ::System::Security::Cryptography::RSA
	{
	public:
		::Mono::Math::BigInteger_B63D07FB4865BEA1* qInv; // 0x20
		::Mono::Math::BigInteger_B63D07FB4865BEA1* q; // 0x28
		::Mono::Math::BigInteger_B63D07FB4865BEA1* d; // 0x30
		::Mono::Math::BigInteger_B63D07FB4865BEA1* p; // 0x38
		::Mono::Math::BigInteger_B63D07FB4865BEA1* e; // 0x40
		::Mono::Math::BigInteger_B63D07FB4865BEA1* n; // 0x48
		::Mono::Math::BigInteger_B63D07FB4865BEA1* dp; // 0x50
		::Mono::Security::Cryptography::RSAManaged_07660F8122E9D98B_KeyGeneratedEventHandler* KeyGenerated; // 0x58
		::Mono::Math::BigInteger_B63D07FB4865BEA1* dq; // 0x60
		::System::Boolean m_disposed; // 0x68
		::System::Boolean keypairGenerated; // 0x69
		::System::Boolean isCRTpossible; // 0x6A
		::System::Void GenerateKeyPair()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_07660F8122E9D98B_GENERATEKEYPAIR_OFFSET))(this);
		}

		::System::Boolean get_PublicOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_07660F8122E9D98B_GET_PUBLICONLY_OFFSET))(this);
		}

		::System::Security::Cryptography::RSAParameters ExportParameters(::System::Boolean a1)
		{
			return ((::System::Security::Cryptography::RSAParameters(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_07660F8122E9D98B_EXPORTPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void ImportParameters(::System::Security::Cryptography::RSAParameters a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSAParameters))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_07660F8122E9D98B_IMPORTPARAMETERS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* GetPaddedValue(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RSAMANAGED_07660F8122E9D98B_GETPADDEDVALUE_OFFSET))(this, a1, a2);
		}

	};
}
