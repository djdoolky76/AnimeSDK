#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricKeyExchangeFormatter.h"
#include "unitysdk/System/Nullable_1.h"

namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class RSA; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_CREATEKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x3D08F10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_GET_OVERRIDESENCRYPT_OFFSET UNITYSDK_OFFSET(0x3D09180)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D09070)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAOAEPKeyExchangeFormatter_TypeDefinitionIndex = 10830;

	class RSAOAEPKeyExchangeFormatter : public ::System::Security::Cryptography::AsymmetricKeyExchangeFormatter
	{
	public:
		::System::Security::Cryptography::RSA* _rsaKey; // 0x10
		::System::Nullable_1<::System::Boolean> _rsaOverridesEncrypt; // 0x18

		::Il2CppArray<::System::Byte>* CreateKeyExchange(::Il2CppArray<::System::Byte>* F0C4E1E3B7BC865D)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_CREATEKEYEXCHANGE_OFFSET))(this, F0C4E1E3B7BC865D);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsymmetricAlgorithm* A5C299C395D3E1B2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER__CTOR_1_OFFSET))(this, A5C299C395D3E1B2);
		}

		::System::Boolean get_OverridesEncrypt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAOAEPKEYEXCHANGEFORMATTER_GET_OVERRIDESENCRYPT_OFFSET))(this);
		}
	};
}
