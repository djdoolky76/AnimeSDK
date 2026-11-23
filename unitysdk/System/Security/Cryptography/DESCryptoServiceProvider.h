#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/DES.h"

namespace System::Security::Cryptography { class ICryptoTransform; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x3CEA790)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x3CEA930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x3CEAAD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x3CEAB50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x3CEAC30)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DESCryptoServiceProvider_TypeDefinitionIndex = 10713;

	class DESCryptoServiceProvider : public ::System::Security::Cryptography::DES
	{
	public:
		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* B1D080F3192B401E, ::Il2CppArray<::System::Byte>* A424CDF1AD9A5133)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET))(this, B1D080F3192B401E, A424CDF1AD9A5133);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* B1D080F3192B401E, ::Il2CppArray<::System::Byte>* A424CDF1AD9A5133)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET))(this, B1D080F3192B401E, A424CDF1AD9A5133);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET))(this);
		}

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET))(this);
		}
	};
}
