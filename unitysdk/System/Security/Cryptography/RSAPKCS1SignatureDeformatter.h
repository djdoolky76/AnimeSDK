#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricSignatureDeformatter.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class RSA; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER_SETHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x3BEA110)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER_SETKEY_OFFSET UNITYSDK_OFFSET(0x3BEA180)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x3BEA290)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16514A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x3BEA480)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAPKCS1SignatureDeformatter_TypeDefinitionIndex = 11284;

	class RSAPKCS1SignatureDeformatter : public ::System::Security::Cryptography::AsymmetricSignatureDeformatter
	{
	public:
		::System::Security::Cryptography::RSA* rsa; // 0x10
		::System::String* hashName; // 0x18

		::System::Void SetHashAlgorithm(::System::String* E3F945827EC89F68)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER_SETHASHALGORITHM_OFFSET))(this, E3F945827EC89F68);
		}

		::System::Void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* A5C299C395D3E1B2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER_SETKEY_OFFSET))(this, A5C299C395D3E1B2);
		}

		::System::Void _ctor(::System::Security::Cryptography::AsymmetricAlgorithm* A5C299C395D3E1B2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER__CTOR_OFFSET))(this, A5C299C395D3E1B2);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Byte>* BE3FA7EA2C29AE5D, ::Il2CppArray<::System::Byte>* E26A316C159F2DC9)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER_VERIFYSIGNATURE_OFFSET))(this, BE3FA7EA2C29AE5D, E26A316C159F2DC9);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDEFORMATTER__CTOR_1_OFFSET))(this);
		}
	};
}
