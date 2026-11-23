#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricKeyExchangeFormatter.h"
#include "unitysdk/System/Nullable_1.h"

namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class RSA; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_CREATEKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x3C05170)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_GET_OVERRIDESENCRYPT_OFFSET UNITYSDK_OFFSET(0x3C055F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16514A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x3C054E0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAPKCS1KeyExchangeFormatter_TypeDefinitionIndex = 11387;

	class RSAPKCS1KeyExchangeFormatter : public ::System::Security::Cryptography::AsymmetricKeyExchangeFormatter
	{
	public:
		::System::Security::Cryptography::RandomNumberGenerator* RngValue; // 0x10
		::System::Security::Cryptography::RSA* _rsaKey; // 0x18
		::System::Nullable_1<::System::Boolean> _rsaOverridesEncrypt; // 0x20

		::System::Void _ctor(::System::Security::Cryptography::AsymmetricAlgorithm* A5C299C395D3E1B2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER__CTOR_OFFSET))(this, A5C299C395D3E1B2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER__CTOR_1_OFFSET))(this);
		}

		::System::Boolean get_OverridesEncrypt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_GET_OVERRIDESENCRYPT_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* CreateKeyExchange(::Il2CppArray<::System::Byte>* F0C4E1E3B7BC865D)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1KEYEXCHANGEFORMATTER_CREATEKEYEXCHANGE_OFFSET))(this, F0C4E1E3B7BC865D);
		}
	};
}
