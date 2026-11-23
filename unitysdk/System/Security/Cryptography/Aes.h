#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"

namespace System { class String; }
namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_AES_CREATE_1_OFFSET UNITYSDK_OFFSET(0x3BDCC60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AES_CREATE_OFFSET UNITYSDK_OFFSET(0x3BDCB60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AES__CCTOR_OFFSET UNITYSDK_OFFSET(0x3BDCDA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AES__CTOR_OFFSET UNITYSDK_OFFSET(0x3BDCF20)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Aes_TypeDefinitionIndex = 11261;

	class Aes : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(Aes_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(Aes_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Security::Cryptography::Aes* Create(::System::String* B7C148AA4174E19B)
		{
			return ((::System::Security::Cryptography::Aes*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AES_CREATE_OFFSET))(B7C148AA4174E19B);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AES__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AES__CTOR_OFFSET))(this);
		}

		static ::System::Security::Cryptography::Aes* Create_1()
		{
			return ((::System::Security::Cryptography::Aes*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AES_CREATE_1_OFFSET))();
		}
	};
}
