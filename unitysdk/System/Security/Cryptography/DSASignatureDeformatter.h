#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricSignatureDeformatter.h"

namespace System { class String; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class DSA; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_SETHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x3B46A70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_SETKEY_OFFSET UNITYSDK_OFFSET(0x3B46B30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x3B46C40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B46D70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x3B46EE0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSASignatureDeformatter_TypeDefinitionIndex = 10300;

	class DSASignatureDeformatter : public ::System::Security::Cryptography::AsymmetricSignatureDeformatter
	{
	public:
		::System::Security::Cryptography::DSA* _dsaKey; // 0x10
		::System::String* _oid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void SetHashAlgorithm(::System::String* E3F945827EC89F68)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_SETHASHALGORITHM_OFFSET))(this, E3F945827EC89F68);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::AsymmetricAlgorithm* A5C299C395D3E1B2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER__CTOR_1_OFFSET))(this, A5C299C395D3E1B2);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Byte>* BE3FA7EA2C29AE5D, ::Il2CppArray<::System::Byte>* E26A316C159F2DC9)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_VERIFYSIGNATURE_OFFSET))(this, BE3FA7EA2C29AE5D, E26A316C159F2DC9);
		}

		::System::Void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* A5C299C395D3E1B2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDEFORMATTER_SETKEY_OFFSET))(this, A5C299C395D3E1B2);
		}
	};
}
