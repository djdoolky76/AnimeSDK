#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"

namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_GET_EFFECTIVEKEYSIZE_OFFSET UNITYSDK_OFFSET(0x3B71E10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x16D1B90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x3B71E20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2__CCTOR_OFFSET UNITYSDK_OFFSET(0x3B71BF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2__CTOR_OFFSET UNITYSDK_OFFSET(0x3B71D70)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RC2_TypeDefinitionIndex = 10344;

	class RC2 : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(RC2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(RC2_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::System::Int32 EffectiveKeySizeValue; // 0x48

		::System::Void set_KeySize(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_SET_KEYSIZE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Int32 get_EffectiveKeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_GET_EFFECTIVEKEYSIZE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2__CTOR_OFFSET))(this);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_GET_KEYSIZE_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2__CCTOR_OFFSET))();
		}
	};
}
