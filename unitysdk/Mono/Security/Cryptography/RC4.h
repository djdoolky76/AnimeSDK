#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"
namespace Mono::Security::Cryptography { class RC4; }
namespace System::Security::Cryptography { class KeySizes; }

#define MONO_SECURITY_CRYPTOGRAPHY_RC4_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D202A20)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4_CREATE_OFFSET UNITYSDK_OFFSET(0x1D2029D0)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F7AA0)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4_GET_IV_OFFSET UNITYSDK_OFFSET(0x1D2029C0)
#define MONO_SECURITY_CRYPTOGRAPHY_RC4_SET_IV_OFFSET UNITYSDK_OFFSET(0x1D1F80B0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int RC4_TypeDefinitionIndex = 75;

	class RC4 : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)UnitySDK::FromName("Mono.Security.Cryptography", "RC4")->GetStaticField(0xBC10);
		}

		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)UnitySDK::FromName("Mono.Security.Cryptography", "RC4")->GetStaticField(0xBC18);
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
