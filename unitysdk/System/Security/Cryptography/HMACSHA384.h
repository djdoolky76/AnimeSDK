#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HMAC.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x3C65410)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C65200)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384__CTOR_OFFSET UNITYSDK_OFFSET(0x3C65310)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMACSHA384_TypeDefinitionIndex = 11672;

	class HMACSHA384 : public ::System::Security::Cryptography::HMAC
	{
	public:
		::System::Boolean m_useLegacyBlockSize; // 0x68

		::System::Int32 get_BlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384_GET_BLOCKSIZE_OFFSET))(this);
		}

		::System::Void _ctor(::Il2CppArray<::System::Byte>* A5C299C395D3E1B2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384__CTOR_OFFSET))(this, A5C299C395D3E1B2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384__CTOR_1_OFFSET))(this);
		}
	};
}
