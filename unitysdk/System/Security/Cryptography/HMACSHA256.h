#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HMAC.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA256__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C95890)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA256__CTOR_OFFSET UNITYSDK_OFFSET(0x3C95980)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMACSHA256_TypeDefinitionIndex = 11714;

	class HMACSHA256 : public ::System::Security::Cryptography::HMAC
	{
	public:
		::System::Void _ctor(::Il2CppArray<::System::Byte>* A5C299C395D3E1B2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA256__CTOR_OFFSET))(this, A5C299C395D3E1B2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA256__CTOR_1_OFFSET))(this);
		}
	};
}
