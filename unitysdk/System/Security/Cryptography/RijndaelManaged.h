#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/CipherMode.h"
#include "unitysdk/System/Security/Cryptography/Rijndael.h"
#include "unitysdk/System/Security/Cryptography/RijndaelManagedTransformMode.h"

namespace System::Security::Cryptography { class ICryptoTransform; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x3C1AD30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x3C1AE20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x3C1AF10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x3C1AF50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_NEWENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x3C1AF90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x3C1B080)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RijndaelManaged_TypeDefinitionIndex = 11465;

	class RijndaelManaged : public ::System::Security::Cryptography::Rijndael
	{
	public:
		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_GENERATEIV_OFFSET))(this);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_GENERATEKEY_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* NewEncryptor(::Il2CppArray<::System::Byte>* B1D080F3192B401E, ::System::Security::Cryptography::CipherMode A84D57260767D5BD, ::Il2CppArray<::System::Byte>* A424CDF1AD9A5133, ::System::Int32 A4EB5BF5CD5944AD, ::System::Security::Cryptography::RijndaelManagedTransformMode B92B0F4DE9482B6B)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::CipherMode, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Security::Cryptography::RijndaelManagedTransformMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_NEWENCRYPTOR_OFFSET))(this, B1D080F3192B401E, A84D57260767D5BD, A424CDF1AD9A5133, A4EB5BF5CD5944AD, B92B0F4DE9482B6B);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* B1D080F3192B401E, ::Il2CppArray<::System::Byte>* A424CDF1AD9A5133)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_CREATEDECRYPTOR_OFFSET))(this, B1D080F3192B401E, A424CDF1AD9A5133);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* B1D080F3192B401E, ::Il2CppArray<::System::Byte>* A424CDF1AD9A5133)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_CREATEENCRYPTOR_OFFSET))(this, B1D080F3192B401E, A424CDF1AD9A5133);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED__CTOR_OFFSET))(this);
		}
	};
}
