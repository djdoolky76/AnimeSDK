#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/RC4.h"

namespace System::Security::Cryptography { class ICryptoTransform; }

#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CHECKINPUT_OFFSET UNITYSDK_OFFSET(0x1D75F060)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x1D75EF90)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x1D75EF70)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D75EA90)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D75EA20)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x1D75EFE0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x1D75ECA0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x1D75F030)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1D75F040)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1D75EB80)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1D75F050)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_INTERNALTRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x1D75F2B0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_KEYSETUP_OFFSET UNITYSDK_OFFSET(0x1D75EE00)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1D75ECC0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x1D75F190)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x1D75F510)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1D75E8C0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int ARC4Managed_TypeDefinitionIndex = 63;

	class ARC4Managed : public ::Mono::Security::Cryptography::RC4
	{
	public:
		::Il2CppArray<::System::Byte>* key; // 0x48
		::Il2CppArray<::System::Byte>* state; // 0x50
		::System::Byte x; // 0x58
		::System::Byte y; // 0x59
		::System::Boolean m_disposed; // 0x5A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_DISPOSE_OFFSET))(this, disposing);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_SET_KEY_OFFSET))(this, value);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* rgbKey, ::Il2CppArray<::System::Byte>* rgvIV)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CREATEENCRYPTOR_OFFSET))(this, rgbKey, rgvIV);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* rgbKey, ::Il2CppArray<::System::Byte>* rgvIV)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CREATEDECRYPTOR_OFFSET))(this, rgbKey, rgvIV);
		}

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GENERATEIV_OFFSET))(this);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GENERATEKEY_OFFSET))(this);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(this);
		}

		::System::Int32 get_InputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_INPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_OUTPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Void KeySetup(::Il2CppArray<::System::Byte>* key)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_KEYSETUP_OFFSET))(this, key);
		}

		::System::Void CheckInput(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CHECKINPUT_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount, ::Il2CppArray<::System::Byte>* outputBuffer, ::System::Int32 outputOffset)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_TRANSFORMBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
		}

		::System::Int32 InternalTransformBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount, ::Il2CppArray<::System::Byte>* outputBuffer, ::System::Int32 outputOffset)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_INTERNALTRANSFORMBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
		}

		::Il2CppArray<::System::Byte>* TransformFinalBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_TRANSFORMFINALBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}
	};
}
