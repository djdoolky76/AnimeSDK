#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"
namespace Mono::Security::Cryptography { class RC4; }
namespace System::Security::Cryptography { class KeySizes; }

#define MONO_SECURITY_CRYPTOGRAPHY_RC4_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C04CF00)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4_CREATE_OFFSET UNITYSDK_OFFSET(0x1C04CEB0)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4_CTOR_OFFSET UNITYSDK_OFFSET(0x1C041FD0)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4_GET_IV_OFFSET UNITYSDK_OFFSET(0x1C04CEA0)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4_SET_IV_OFFSET UNITYSDK_OFFSET(0x1C0425E0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int RC4_TypeDefinitionIndex = 75;

	class RC4 : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)UnitySDK::FromName("Mono.Security.Cryptography", "RC4")->GetStaticField(0xC480);
		}

		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)UnitySDK::FromName("Mono.Security.Cryptography", "RC4")->GetStaticField(0xC488);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RC4_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RC4_CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* get_IV()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RC4_GET_IV_OFFSET))(this);
		}

		::System::Void set_IV(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RC4_SET_IV_OFFSET))(this, a1);
		}

		static ::Mono::Security::Cryptography::RC4* Create()
		{
			return ((::Mono::Security::Cryptography::RC4*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_RC4_CREATE_OFFSET))();
		}

	};
}
