#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/RC4_9CD90F382A80F984.h"

namespace System::Security::Cryptography { class ICryptoTransform; }

#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_CHECKINPUT_OFFSET UNITYSDK_OFFSET(0x1F2BA900)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x1F2BA830)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x1F2BA810)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F2BA320)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F2BA2B0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x1F2BA880)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x1F2BA530)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_GET_CANREUSETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F2BA800)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x1F2BA8D0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1F2BA8E0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1F2BA410)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1F2BA8F0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_INTERNALTRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x1F2BAB50)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_KEYSETUP_OFFSET UNITYSDK_OFFSET(0x1F2BA690)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1F2BA550)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x1F2BAA30)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x1F2BADB0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2BA150)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int ARC4Managed_8812122AE22E66A8_TypeDefinitionIndex = 2446;

	class ARC4Managed_8812122AE22E66A8 : public ::Mono::Security::Cryptography::RC4_9CD90F382A80F984
	{
	public:
		::Il2CppArray<::System::Byte>* state; // 0x48
		::Il2CppArray<::System::Byte>* key; // 0x50
		::System::Byte y; // 0x58
		::System::Byte x; // 0x59
		::System::Boolean m_disposed; // 0x5A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_DISPOSE_OFFSET))(this, disposing);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_SET_KEY_OFFSET))(this, value);
		}

		::System::Boolean get_CanReuseTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_GET_CANREUSETRANSFORM_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* rgbKey, ::Il2CppArray<::System::Byte>* rgvIV)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_CREATEENCRYPTOR_OFFSET))(this, rgbKey, rgvIV);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* rgbKey, ::Il2CppArray<::System::Byte>* rgvIV)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_CREATEDECRYPTOR_OFFSET))(this, rgbKey, rgvIV);
		}

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_GENERATEIV_OFFSET))(this);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_GENERATEKEY_OFFSET))(this);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(this);
		}

		::System::Int32 get_InputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_GET_INPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_GET_OUTPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Void KeySetup(::Il2CppArray<::System::Byte>* key)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_KEYSETUP_OFFSET))(this, key);
		}

		::System::Void CheckInput(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_CHECKINPUT_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount, ::Il2CppArray<::System::Byte>* outputBuffer, ::System::Int32 outputOffset)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_TRANSFORMBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
		}

		::System::Int32 InternalTransformBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount, ::Il2CppArray<::System::Byte>* outputBuffer, ::System::Int32 outputOffset)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_INTERNALTRANSFORMBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
		}

		::Il2CppArray<::System::Byte>* TransformFinalBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_8812122AE22E66A8_TRANSFORMFINALBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}
	};
}
