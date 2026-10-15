#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HMAC.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C364050)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C3640C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1_CTOR_OFFSET UNITYSDK_OFFSET(0x1C359310)

namespace System::Security::Cryptography
{
	class HMACSHA1 : public ::System::Security::Cryptography::HMAC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1_CTOR_2_OFFSET))(this, a1, a2);
		}

	};
}
