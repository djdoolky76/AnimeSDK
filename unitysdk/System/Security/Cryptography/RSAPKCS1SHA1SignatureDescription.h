#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RSAPKCS1SignatureDescription.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SHA1SIGNATUREDESCRIPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0D5B70)

namespace System::Security::Cryptography
{
	class RSAPKCS1SHA1SignatureDescription : public ::System::Security::Cryptography::RSAPKCS1SignatureDescription
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SHA1SIGNATUREDESCRIPTION_CTOR_OFFSET))(this);
		}

	};
}
