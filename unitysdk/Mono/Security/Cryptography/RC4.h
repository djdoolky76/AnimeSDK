#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"

namespace System::Security::Cryptography { class KeySizes; }

#define MONO_SECURITY_CRYPTOGRAPHY_RC4_CREATE_OFFSET UNITYSDK_OFFSET(0x3B24890)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4_GET_IV_OFFSET UNITYSDK_OFFSET(0x3B24B00)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4_SET_IV_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4__CCTOR_OFFSET UNITYSDK_OFFSET(0x3B248E0)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4__CTOR_OFFSET UNITYSDK_OFFSET(0x3B24A60)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int RC4_TypeDefinitionIndex = 19273;

	class RC4 : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(RC4_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(RC4_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		::Il2CppArray<::System::Byte>* get_IV()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RC4_GET_IV_OFFSET))(this);
		}

		::System::Void set_IV(::Il2CppArray<::System::Byte>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RC4_SET_IV_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RC4__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RC4__CCTOR_OFFSET))();
		}

		static ::Mono::Security::Cryptography::RC4* Create()
		{
			return ((::Mono::Security::Cryptography::RC4*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RC4_CREATE_OFFSET))();
		}
	};
}
