#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/RC4.h"

namespace System::Security::Cryptography { class ICryptoTransform; }

#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CHECKINPUT_OFFSET UNITYSDK_OFFSET(0x3B2CB90)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x3B2CD30)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x3B2CD70)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3B2CDA0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x3B2CE70)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x3B2CEE0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x3B2CF40)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x1678550)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x165D460)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_KEY_OFFSET UNITYSDK_OFFSET(0x3B2D650)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x165D460)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_INTERNALTRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x3B2D020)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_KEYSETUP_OFFSET UNITYSDK_OFFSET(0x3B2D220)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_SET_KEY_OFFSET UNITYSDK_OFFSET(0x3B2D6F0)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x3B2D380)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x3B2D510)
#define MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x3B2D5D0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int ARC4Managed_TypeDefinitionIndex = 19349;

	class ARC4Managed : public ::Mono::Security::Cryptography::RC4
	{
	public:
		::Il2CppArray<::System::Byte>* key; // 0x48
		::Il2CppArray<::System::Byte>* state; // 0x50
		::System::Byte x; // 0x58
		::System::Byte y; // 0x59
		::System::Boolean m_disposed; // 0x5A

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GENERATEIV_OFFSET))(this);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GENERATEKEY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* TransformFinalBlock(::Il2CppArray<::System::Byte>* FB1D6547F3F5F0EF, ::System::Int32 B0A56A8B8381106F, ::System::Int32 E0526D776D4634F5)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_TRANSFORMFINALBLOCK_OFFSET))(this, FB1D6547F3F5F0EF, B0A56A8B8381106F, E0526D776D4634F5);
		}

		::System::Int32 InternalTransformBlock(::Il2CppArray<::System::Byte>* FB1D6547F3F5F0EF, ::System::Int32 B0A56A8B8381106F, ::System::Int32 E0526D776D4634F5, ::Il2CppArray<::System::Byte>* FA8BB333D6131BE8, ::System::Int32 A9499CC3C978CAF4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_INTERNALTRANSFORMBLOCK_OFFSET))(this, FB1D6547F3F5F0EF, B0A56A8B8381106F, E0526D776D4634F5, FA8BB333D6131BE8, A9499CC3C978CAF4);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_SET_KEY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* B1D080F3192B401E, ::Il2CppArray<::System::Byte>* EA902A5F1793D87B)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CREATEENCRYPTOR_OFFSET))(this, B1D080F3192B401E, EA902A5F1793D87B);
		}

		::System::Void KeySetup(::Il2CppArray<::System::Byte>* A5C299C395D3E1B2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_KEYSETUP_OFFSET))(this, A5C299C395D3E1B2);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_KEY_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED__CTOR_OFFSET))(this);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_OUTPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Byte>* FB1D6547F3F5F0EF, ::System::Int32 B0A56A8B8381106F, ::System::Int32 E0526D776D4634F5, ::Il2CppArray<::System::Byte>* FA8BB333D6131BE8, ::System::Int32 A9499CC3C978CAF4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_TRANSFORMBLOCK_OFFSET))(this, FB1D6547F3F5F0EF, B0A56A8B8381106F, E0526D776D4634F5, FA8BB333D6131BE8, A9499CC3C978CAF4);
		}

		::System::Void CheckInput(::Il2CppArray<::System::Byte>* FB1D6547F3F5F0EF, ::System::Int32 B0A56A8B8381106F, ::System::Int32 E0526D776D4634F5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CHECKINPUT_OFFSET))(this, FB1D6547F3F5F0EF, B0A56A8B8381106F, E0526D776D4634F5);
		}

		::System::Int32 get_InputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_INPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* B1D080F3192B401E, ::Il2CppArray<::System::Byte>* EA902A5F1793D87B)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_CREATEDECRYPTOR_OFFSET))(this, B1D080F3192B401E, EA902A5F1793D87B);
		}

		::System::Void Dispose(::System::Boolean FB4A1BD5C4242BE9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_DISPOSE_OFFSET))(this, FB4A1BD5C4242BE9);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_ARC4MANAGED_FINALIZE_OFFSET))(this);
		}
	};
}
