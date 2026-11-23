#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HMAC.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BFDA00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3BFDA00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1__CTOR_OFFSET UNITYSDK_OFFSET(0x3BFDAE0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMACSHA1_TypeDefinitionIndex = 11374;

	class HMACSHA1 : public ::System::Security::Cryptography::HMAC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* A5C299C395D3E1B2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1__CTOR_1_OFFSET))(this, A5C299C395D3E1B2);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* A5C299C395D3E1B2, ::System::Boolean E6502CB049837B2D)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1__CTOR_2_OFFSET))(this, A5C299C395D3E1B2, E6502CB049837B2D);
		}
	};
}
