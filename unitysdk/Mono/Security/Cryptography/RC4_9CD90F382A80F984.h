#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"

namespace System { class String; }
namespace System::Security::Cryptography { class KeySizes; }

#define MONO_SECURITY_CRYPTOGRAPHY_RC4_9CD90F382A80F984_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1F2C1780)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4_9CD90F382A80F984_CREATE_OFFSET UNITYSDK_OFFSET(0x1F2C1730)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4_9CD90F382A80F984_GET_IV_OFFSET UNITYSDK_OFFSET(0x1F2C16F0)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4_9CD90F382A80F984_SET_IV_OFFSET UNITYSDK_OFFSET(0x1F2BA8C0)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4_9CD90F382A80F984__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2C1810)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4_9CD90F382A80F984__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2BA240)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int RC4_9CD90F382A80F984_TypeDefinitionIndex = 2465;

	class RC4_9CD90F382A80F984 : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(RC4_9CD90F382A80F984_TypeDefinitionIndex)->GetStaticField(0x2330);
		}
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(RC4_9CD90F382A80F984_TypeDefinitionIndex)->GetStaticField(0x2338);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RC4_9CD90F382A80F984__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RC4_9CD90F382A80F984__CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* get_IV()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RC4_9CD90F382A80F984_GET_IV_OFFSET))(this);
		}

		::System::Void set_IV(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RC4_9CD90F382A80F984_SET_IV_OFFSET))(this, value);
		}

		static ::Mono::Security::Cryptography::RC4_9CD90F382A80F984* Create()
		{
			return ((::Mono::Security::Cryptography::RC4_9CD90F382A80F984*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RC4_9CD90F382A80F984_CREATE_OFFSET))();
		}

		static ::Mono::Security::Cryptography::RC4_9CD90F382A80F984* Create_1(::System::String* algName)
		{
			return ((::Mono::Security::Cryptography::RC4_9CD90F382A80F984*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RC4_9CD90F382A80F984_CREATE_1_OFFSET))(algName);
		}
	};
}
