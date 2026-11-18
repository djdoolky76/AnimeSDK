#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/PKCS8_A6D5F5B302F41534_KeyInfo.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_A6D5F5B302F41534_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1F2C15B0)
#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8_A6D5F5B302F41534__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C15A0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int PKCS8_A6D5F5B302F41534_TypeDefinitionIndex = 2461;

	class PKCS8_A6D5F5B302F41534 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_A6D5F5B302F41534__CTOR_OFFSET))(this);
		}

		static ::Mono::Security::Cryptography::PKCS8_A6D5F5B302F41534_KeyInfo GetType(::Il2CppArray<::System::Byte>* data)
		{
			return ((::Mono::Security::Cryptography::PKCS8_A6D5F5B302F41534_KeyInfo(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8_A6D5F5B302F41534_GETTYPE_OFFSET))(data);
		}
	};
}
