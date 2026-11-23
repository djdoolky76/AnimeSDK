#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/SymmetricTransform.h"

namespace System::Security::Cryptography { class RC2; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM_ECB_OFFSET UNITYSDK_OFFSET(0x3BCC770)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x3BCD630)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x3BCD6C0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RC2Transform_TypeDefinitionIndex = 11194;

	class RC2Transform : public ::Mono::Security::Cryptography::SymmetricTransform
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_pitable()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(RC2Transform_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::UInt16 R0; // 0x58
		::System::UInt16 R1; // 0x5A
		::System::UInt16 R2; // 0x5C
		::System::UInt16 R3; // 0x5E
		::Il2CppArray<::System::UInt16>* K; // 0x60
		::System::Int32 j; // 0x68

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Security::Cryptography::RC2* FCC103AE6632F077, ::System::Boolean A3CC5519DC5E6E5C, ::Il2CppArray<::System::Byte>* A5C299C395D3E1B2, ::Il2CppArray<::System::Byte>* A92EBBEA31851985)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RC2*, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM__CTOR_OFFSET))(this, FCC103AE6632F077, A3CC5519DC5E6E5C, A5C299C395D3E1B2, A92EBBEA31851985);
		}

		::System::Void ECB(::Il2CppArray<::System::Byte>* AF4717A1A80FD60F, ::Il2CppArray<::System::Byte>* B7269378254B3BAC)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2TRANSFORM_ECB_OFFSET))(this, AF4717A1A80FD60F, B7269378254B3BAC);
		}
	};
}
