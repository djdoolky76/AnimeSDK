#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509ChainStatusFlags.h"
namespace System { class String; }

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainStatus_TypeDefinitionIndex = 2705;

	struct alignas(8) X509ChainStatus
	{
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags status; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* info; // 0x18
	};
}
