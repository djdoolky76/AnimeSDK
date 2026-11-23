#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EADE0CABA1B6337C.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICOPERATIONS_ZEROMEMORY_OFFSET UNITYSDK_OFFSET(0x3B8C260)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptographicOperations_TypeDefinitionIndex = 11125;

	class CryptographicOperations : public ::System::Object
	{
	public:
		static ::System::Void ZeroMemory(::EADE0CABA1B6337C<::System::Byte> F6C2EBBDFCAEF915)
		{
			return ((::System::Void(*)(::EADE0CABA1B6337C<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICOPERATIONS_ZEROMEMORY_OFFSET))(F6C2EBBDFCAEF915);
		}
	};
}
