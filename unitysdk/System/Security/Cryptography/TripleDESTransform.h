#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/SymmetricTransform.h"

namespace System::Security::Cryptography { class DESTransform; }
namespace System::Security::Cryptography { class TripleDES; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_ECB_OFFSET UNITYSDK_OFFSET(0x3BA2300)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_GETSTRONGKEY_OFFSET UNITYSDK_OFFSET(0x3BA2460)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x3BA2510)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int TripleDESTransform_TypeDefinitionIndex = 11114;

	class TripleDESTransform : public ::Mono::Security::Cryptography::SymmetricTransform
	{
	public:
		::System::Security::Cryptography::DESTransform* E1; // 0x58
		::System::Security::Cryptography::DESTransform* D2; // 0x60
		::System::Security::Cryptography::DESTransform* E3; // 0x68
		::System::Security::Cryptography::DESTransform* D1; // 0x70
		::System::Security::Cryptography::DESTransform* E2; // 0x78
		::System::Security::Cryptography::DESTransform* D3; // 0x80

		::System::Void ECB(::Il2CppArray<::System::Byte>* AF4717A1A80FD60F, ::Il2CppArray<::System::Byte>* B7269378254B3BAC)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_ECB_OFFSET))(this, AF4717A1A80FD60F, B7269378254B3BAC);
		}

		::System::Void _ctor(::System::Security::Cryptography::TripleDES* BE12645BF3890BE6, ::System::Boolean A3CC5519DC5E6E5C, ::Il2CppArray<::System::Byte>* A5C299C395D3E1B2, ::Il2CppArray<::System::Byte>* A92EBBEA31851985)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::TripleDES*, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM__CTOR_OFFSET))(this, BE12645BF3890BE6, A3CC5519DC5E6E5C, A5C299C395D3E1B2, A92EBBEA31851985);
		}

		static ::Il2CppArray<::System::Byte>* GetStrongKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESTRANSFORM_GETSTRONGKEY_OFFSET))();
		}
	};
}
