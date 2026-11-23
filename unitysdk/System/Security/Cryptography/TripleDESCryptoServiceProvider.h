#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/TripleDES.h"

namespace System::Security::Cryptography { class ICryptoTransform; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x3BD7BA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x3BD7CC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x3BD7DE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x3BD7E60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x3BD7F20)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int TripleDESCryptoServiceProvider_TypeDefinitionIndex = 11212;

	class TripleDESCryptoServiceProvider : public ::System::Security::Cryptography::TripleDES
	{
	public:
		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* B1D080F3192B401E, ::Il2CppArray<::System::Byte>* A424CDF1AD9A5133)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET))(this, B1D080F3192B401E, A424CDF1AD9A5133);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* B1D080F3192B401E, ::Il2CppArray<::System::Byte>* A424CDF1AD9A5133)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET))(this, B1D080F3192B401E, A424CDF1AD9A5133);
		}

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET))(this);
		}
	};
}
