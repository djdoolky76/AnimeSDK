#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/CipherMode.h"
#include "unitysdk/System/Security/Cryptography/PaddingMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CLEAR_OFFSET UNITYSDK_OFFSET(0x3BEDEB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x3BEDEF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEENCRYPTOR_1_OFFSET UNITYSDK_OFFSET(0x3BEDF60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATE_OFFSET UNITYSDK_OFFSET(0x3BEDFD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x3BEE070)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3BEE0F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_FEEDBACKSIZE_OFFSET UNITYSDK_OFFSET(0x19DB7F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_IV_OFFSET UNITYSDK_OFFSET(0x3BEE240)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x16D1B90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_KEY_OFFSET UNITYSDK_OFFSET(0x3BEE2E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_LEGALKEYSIZES_OFFSET UNITYSDK_OFFSET(0x3BEE380)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_MODE_OFFSET UNITYSDK_OFFSET(0x18D5230)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1972DE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x3BEE400)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_IV_OFFSET UNITYSDK_OFFSET(0x3BEE590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x3BEE700)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_KEY_OFFSET UNITYSDK_OFFSET(0x3BEE7A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_MODE_OFFSET UNITYSDK_OFFSET(0x3BEE930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x3BEE9B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_VALIDKEYSIZE_OFFSET UNITYSDK_OFFSET(0x3BEE160)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM__CTOR_OFFSET UNITYSDK_OFFSET(0x3BEE210)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SymmetricAlgorithm_TypeDefinitionIndex = 11260;

	class SymmetricAlgorithm : public ::System::Object
	{
	public:
		::System::Int32 BlockSizeValue; // 0x10
		::System::Int32 FeedbackSizeValue; // 0x14
		::Il2CppArray<::System::Byte>* IVValue; // 0x18
		::Il2CppArray<::System::Byte>* KeyValue; // 0x20
		::Il2CppArray<::System::Security::Cryptography::KeySizes*>* LegalBlockSizesValue; // 0x28
		::Il2CppArray<::System::Security::Cryptography::KeySizes*>* LegalKeySizesValue; // 0x30
		::System::Int32 KeySizeValue; // 0x38
		::System::Security::Cryptography::CipherMode ModeValue; // 0x3C
		::System::Security::Cryptography::PaddingMode PaddingValue; // 0x40

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor()
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEDECRYPTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Security::Cryptography::KeySizes*>* get_LegalKeySizes()
		{
			return ((::Il2CppArray<::System::Security::Cryptography::KeySizes*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_LEGALKEYSIZES_OFFSET))(this);
		}

		::System::Void set_IV(::Il2CppArray<::System::Byte>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_IV_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_KEY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::CipherMode get_Mode()
		{
			return ((::System::Security::Cryptography::CipherMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_MODE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_IV()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_IV_OFFSET))(this);
		}

		::System::Security::Cryptography::PaddingMode get_Padding()
		{
			return ((::System::Security::Cryptography::PaddingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_PADDING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_FeedbackSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_FEEDBACKSIZE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean FB4A1BD5C4242BE9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_DISPOSE_1_OFFSET))(this, FB4A1BD5C4242BE9);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_KEY_OFFSET))(this);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Void set_Padding(::System::Security::Cryptography::PaddingMode E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::PaddingMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_PADDING_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_BlockSize(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_BLOCKSIZE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor_1()
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEENCRYPTOR_1_OFFSET))(this);
		}

		::System::Void set_KeySize(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_KEYSIZE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CLEAR_OFFSET))(this);
		}

		::System::Void set_Mode(::System::Security::Cryptography::CipherMode E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CipherMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_MODE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Int32 get_BlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_BLOCKSIZE_OFFSET))(this);
		}

		::System::Boolean ValidKeySize(::System::Int32 F85385D646B00141)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_VALIDKEYSIZE_OFFSET))(this, F85385D646B00141);
		}

		static ::System::Security::Cryptography::SymmetricAlgorithm* Create(::System::String* F4C2A0DCE429FFB9)
		{
			return ((::System::Security::Cryptography::SymmetricAlgorithm*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATE_OFFSET))(F4C2A0DCE429FFB9);
		}
	};
}
