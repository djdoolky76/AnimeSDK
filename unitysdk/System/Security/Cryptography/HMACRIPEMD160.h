#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HMAC.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACRIPEMD160__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B4EC10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACRIPEMD160__CTOR_OFFSET UNITYSDK_OFFSET(0x3B4ED00)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMACRIPEMD160_TypeDefinitionIndex = 10270;

	class HMACRIPEMD160 : public ::System::Security::Cryptography::HMAC
	{
	public:
		::System::Void _ctor(::Il2CppArray<::System::Byte>* A5C299C395D3E1B2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACRIPEMD160__CTOR_OFFSET))(this, A5C299C395D3E1B2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACRIPEMD160__CTOR_1_OFFSET))(this);
		}
	};
}
