#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricKeyExchangeDeformatter.h"
#include "unitysdk/System/Nullable_1.h"

namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class RSA; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER_DECRYPTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x3C2E930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER_GET_OVERRIDESDECRYPT_OFFSET UNITYSDK_OFFSET(0x3C2EBA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C2EA90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAOAEPKeyExchangeDeformatter_TypeDefinitionIndex = 11515;

	class RSAOAEPKeyExchangeDeformatter : public ::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter
	{
	public:
		::System::Security::Cryptography::RSA* _rsaKey; // 0x10
		::System::Nullable_1<::System::Boolean> _rsaOverridesDecrypt; // 0x18

		::Il2CppArray<::System::Byte>* DecryptKeyExchange(::Il2CppArray<::System::Byte>* F0C4E1E3B7BC865D)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER_DECRYPTKEYEXCHANGE_OFFSET))(this, F0C4E1E3B7BC865D);
		}

		::System::Boolean get_OverridesDecrypt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER_GET_OVERRIDESDECRYPT_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsymmetricAlgorithm* A5C299C395D3E1B2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEDEFORMATTER__CTOR_1_OFFSET))(this, A5C299C395D3E1B2);
		}
	};
}
