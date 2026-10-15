#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"
namespace System::Security::Cryptography { class SHA256; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256_CREATE_OFFSET UNITYSDK_OFFSET(0x1C0DE970)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0DE960)

namespace System::Security::Cryptography
{
	class SHA256 : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256_CTOR_OFFSET))(this);
		}

		static ::System::Security::Cryptography::SHA256* Create()
		{
			return ((::System::Security::Cryptography::SHA256*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256_CREATE_OFFSET))();
		}

	};
}
