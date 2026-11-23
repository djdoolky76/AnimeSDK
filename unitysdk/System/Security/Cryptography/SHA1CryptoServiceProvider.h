#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SHA1.h"

namespace System::Security::Cryptography { class SHA1Internal; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3B6FF10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x3B74650)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_HASHCORE_OFFSET UNITYSDK_OFFSET(0x3B746C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x3B746F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x3B74720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x3B74740)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA1CryptoServiceProvider_TypeDefinitionIndex = 10358;

	class SHA1CryptoServiceProvider : public ::System::Security::Cryptography::SHA1
	{
	public:
		::System::Security::Cryptography::SHA1Internal* sha; // 0x28

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_INITIALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean FB4A1BD5C4242BE9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_DISPOSE_OFFSET))(this, FB4A1BD5C4242BE9);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_HASHFINAL_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* EFD90D39604601F6, ::System::Int32 A985F8C5DF08C68A, ::System::Int32 B1F2419A701C8F03)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_HASHCORE_OFFSET))(this, EFD90D39604601F6, A985F8C5DF08C68A, B1F2419A701C8F03);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1CRYPTOSERVICEPROVIDER_FINALIZE_OFFSET))(this);
		}
	};
}
