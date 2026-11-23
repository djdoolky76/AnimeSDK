#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/Aes.h"
#include "unitysdk/System/Security/Cryptography/CipherMode.h"
#include "unitysdk/System/Security/Cryptography/PaddingMode.h"

namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class RijndaelManaged; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEDECRYPTOR_1_OFFSET UNITYSDK_OFFSET(0x3DE3740)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x3DE35A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEENCRYPTOR_1_OFFSET UNITYSDK_OFFSET(0x3DE3770)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x3DE3910)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3DE3940)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x3DE39F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x3DE3A20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_FEEDBACKSIZE_OFFSET UNITYSDK_OFFSET(0x3DE3BE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_IV_OFFSET UNITYSDK_OFFSET(0x3DE3C10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x3DE3C40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_KEY_OFFSET UNITYSDK_OFFSET(0x3DE3C70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_MODE_OFFSET UNITYSDK_OFFSET(0x3DE3CA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x3DE3CD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_IV_OFFSET UNITYSDK_OFFSET(0x3DE3D00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x3DE3D30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_KEY_OFFSET UNITYSDK_OFFSET(0x3DE3D60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_MODE_OFFSET UNITYSDK_OFFSET(0x3DE3D90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x3DE3E40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x3DE3A50)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AesManaged_TypeDefinitionIndex = 20171;

	class AesManaged : public ::System::Security::Cryptography::Aes
	{
	public:
		::System::Security::Cryptography::RijndaelManaged* m_rijndael; // 0x48

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* A5C299C395D3E1B2, ::Il2CppArray<::System::Byte>* A92EBBEA31851985)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEDECRYPTOR_OFFSET))(this, A5C299C395D3E1B2, A92EBBEA31851985);
		}

		::System::Void set_KeySize(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_KEYSIZE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor()
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEENCRYPTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor_1()
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEDECRYPTOR_1_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_KEY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_IV(::Il2CppArray<::System::Byte>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_IV_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor_1(::Il2CppArray<::System::Byte>* A5C299C395D3E1B2, ::Il2CppArray<::System::Byte>* A92EBBEA31851985)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEENCRYPTOR_1_OFFSET))(this, A5C299C395D3E1B2, A92EBBEA31851985);
		}

		::System::Int32 get_FeedbackSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_FEEDBACKSIZE_OFFSET))(this);
		}

		::System::Security::Cryptography::PaddingMode get_Padding()
		{
			return ((::System::Security::Cryptography::PaddingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_Padding(::System::Security::Cryptography::PaddingMode E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::PaddingMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_PADDING_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean FB4A1BD5C4242BE9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_DISPOSE_OFFSET))(this, FB4A1BD5C4242BE9);
		}

		::System::Void set_Mode(::System::Security::Cryptography::CipherMode E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CipherMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_MODE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Security::Cryptography::CipherMode get_Mode()
		{
			return ((::System::Security::Cryptography::CipherMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_MODE_OFFSET))(this);
		}

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GENERATEIV_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_IV()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_IV_OFFSET))(this);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GENERATEKEY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_KEY_OFFSET))(this);
		}
	};
}
