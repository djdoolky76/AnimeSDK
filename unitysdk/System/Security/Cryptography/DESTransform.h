#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/SymmetricTransform.h"

namespace System::Security::Cryptography { class SymmetricAlgorithm; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_BSWAP_OFFSET UNITYSDK_OFFSET(0x3D185C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_CIPHERFUNCT_OFFSET UNITYSDK_OFFSET(0x3D187B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_ECB_OFFSET UNITYSDK_OFFSET(0x3D18BB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_GETSTRONGKEY_OFFSET UNITYSDK_OFFSET(0x3D18C70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_PERMUTATION_OFFSET UNITYSDK_OFFSET(0x3D18D20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x3D191F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_SETKEY_OFFSET UNITYSDK_OFFSET(0x3D196C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x3D19B40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x3D19DF0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DESTransform_TypeDefinitionIndex = 10897;

	class DESTransform : public ::Mono::Security::Cryptography::SymmetricTransform
	{
	public:
		static ::System::Int32* StaticGet_KEY_BIT_SIZE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_KEY_BYTE_SIZE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0x4);
		}
		static ::System::Int32* StaticGet_BLOCK_BIT_SIZE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Int32* StaticGet_BLOCK_BYTE_SIZE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0xC);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_spBoxes()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_PC1()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_leftRotTotal()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_PC2()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_ipTab()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_fpTab()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0x38);
		}
		::Il2CppArray<::System::Byte>* keySchedule; // 0x58
		::Il2CppArray<::System::Byte>* byteBuff; // 0x60
		::Il2CppArray<::System::UInt32>* dwordBuff; // 0x68

		::System::Void ECB(::Il2CppArray<::System::Byte>* AF4717A1A80FD60F, ::Il2CppArray<::System::Byte>* B7269378254B3BAC)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_ECB_OFFSET))(this, AF4717A1A80FD60F, B7269378254B3BAC);
		}

		static ::System::Void BSwap(::Il2CppArray<::System::Byte>* F9ECFB058815A703)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_BSWAP_OFFSET))(F9ECFB058815A703);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM__CCTOR_OFFSET))();
		}

		static ::System::Void Permutation(::Il2CppArray<::System::Byte>* AF4717A1A80FD60F, ::Il2CppArray<::System::Byte>* B7269378254B3BAC, ::Il2CppArray<::System::UInt32>* E6EF9D98C2472DF7, ::System::Boolean AD6BB35D5D97C8E6)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_PERMUTATION_OFFSET))(AF4717A1A80FD60F, B7269378254B3BAC, E6EF9D98C2472DF7, AD6BB35D5D97C8E6);
		}

		static ::Il2CppArray<::System::Byte>* GetStrongKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_GETSTRONGKEY_OFFSET))();
		}

		::System::Void _ctor(::System::Security::Cryptography::SymmetricAlgorithm* F4B3A157CE4CC26F, ::System::Boolean A3CC5519DC5E6E5C, ::Il2CppArray<::System::Byte>* A5C299C395D3E1B2, ::Il2CppArray<::System::Byte>* A92EBBEA31851985)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::SymmetricAlgorithm*, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM__CTOR_OFFSET))(this, F4B3A157CE4CC26F, A3CC5519DC5E6E5C, A5C299C395D3E1B2, A92EBBEA31851985);
		}

		::System::Void ProcessBlock(::Il2CppArray<::System::Byte>* AF4717A1A80FD60F, ::Il2CppArray<::System::Byte>* B7269378254B3BAC)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_PROCESSBLOCK_OFFSET))(this, AF4717A1A80FD60F, B7269378254B3BAC);
		}

		::System::Void SetKey(::Il2CppArray<::System::Byte>* A5C299C395D3E1B2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_SETKEY_OFFSET))(this, A5C299C395D3E1B2);
		}

		::System::UInt32 CipherFunct(::System::UInt32 A342D5344F7596A8, ::System::Int32 B8A243EF3616E270)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_CIPHERFUNCT_OFFSET))(this, A342D5344F7596A8, B8A243EF3616E270);
		}
	};
}
