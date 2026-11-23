#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/SymmetricTransform.h"

namespace System::Security::Cryptography { class Aes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_DECRYPT128_OFFSET UNITYSDK_OFFSET(0x3DE3E70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_ECB_OFFSET UNITYSDK_OFFSET(0x3DE7EA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_ENCRYPT128_OFFSET UNITYSDK_OFFSET(0x3DE7ED0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_SUBBYTE_OFFSET UNITYSDK_OFFSET(0x3DEBEC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x3DEBFF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x3DEC400)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AesTransform_TypeDefinitionIndex = 20172;

	class AesTransform : public ::Mono::Security::Cryptography::SymmetricTransform
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_Rcon()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_SBox()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_iSBox()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_T0()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_T1()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_T2()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_T3()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_iT0()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x38);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_iT1()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x40);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_iT2()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x48);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_iT3()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AesTransform_TypeDefinitionIndex)->GetStaticField(0x50);
		}
		::Il2CppArray<::System::UInt32>* expandedKey; // 0x58
		::System::Int32 Nk; // 0x60
		::System::Int32 Nr; // 0x64

		::System::Void Encrypt128(::Il2CppArray<::System::Byte>* A4CC06A34BE89748, ::Il2CppArray<::System::Byte>* B22F85A4CEF86C55, ::Il2CppArray<::System::UInt32>* E2D485FBFA14B9BD)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_ENCRYPT128_OFFSET))(this, A4CC06A34BE89748, B22F85A4CEF86C55, E2D485FBFA14B9BD);
		}

		::System::Void ECB(::Il2CppArray<::System::Byte>* AF4717A1A80FD60F, ::Il2CppArray<::System::Byte>* B7269378254B3BAC)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_ECB_OFFSET))(this, AF4717A1A80FD60F, B7269378254B3BAC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Security::Cryptography::Aes* BE12645BF3890BE6, ::System::Boolean A3CC5519DC5E6E5C, ::Il2CppArray<::System::Byte>* A5C299C395D3E1B2, ::Il2CppArray<::System::Byte>* A92EBBEA31851985)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::Aes*, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM__CTOR_OFFSET))(this, BE12645BF3890BE6, A3CC5519DC5E6E5C, A5C299C395D3E1B2, A92EBBEA31851985);
		}

		::System::UInt32 SubByte(::System::UInt32 B35BBBE7E39341A2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_SUBBYTE_OFFSET))(this, B35BBBE7E39341A2);
		}

		::System::Void Decrypt128(::Il2CppArray<::System::Byte>* A4CC06A34BE89748, ::Il2CppArray<::System::Byte>* B22F85A4CEF86C55, ::Il2CppArray<::System::UInt32>* E2D485FBFA14B9BD)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESTRANSFORM_DECRYPT128_OFFSET))(this, A4CC06A34BE89748, B22F85A4CEF86C55, E2D485FBFA14B9BD);
		}
	};
}
