#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512_CREATE_OFFSET UNITYSDK_OFFSET(0x3B85250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512__CTOR_OFFSET UNITYSDK_OFFSET(0x3B852A0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA512_TypeDefinitionIndex = 11049;

	class SHA512 : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512__CTOR_OFFSET))(this);
		}

		static ::System::Security::Cryptography::SHA512* Create()
		{
			return ((::System::Security::Cryptography::SHA512*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512_CREATE_OFFSET))();
		}
	};
}
