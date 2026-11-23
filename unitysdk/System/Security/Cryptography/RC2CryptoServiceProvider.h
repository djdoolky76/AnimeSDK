#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RC2.h"

namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x3C699E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x3C69AB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x3C69B80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x3C69C00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GET_EFFECTIVEKEYSIZE_OFFSET UNITYSDK_OFFSET(0x16D1B90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C69C80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x3C69D60)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RC2CryptoServiceProvider_TypeDefinitionIndex = 11626;

	class RC2CryptoServiceProvider : public ::System::Security::Cryptography::RC2
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(RC2CryptoServiceProvider_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Boolean m_use40bitSalt; // 0x50

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET))(this);
		}

		::System::Int32 get_EffectiveKeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GET_EFFECTIVEKEYSIZE_OFFSET))(this);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* B1D080F3192B401E, ::Il2CppArray<::System::Byte>* A424CDF1AD9A5133)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET))(this, B1D080F3192B401E, A424CDF1AD9A5133);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* B1D080F3192B401E, ::Il2CppArray<::System::Byte>* A424CDF1AD9A5133)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET))(this, B1D080F3192B401E, A424CDF1AD9A5133);
		}
	};
}
