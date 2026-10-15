#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"
namespace System::Security::Cryptography { class KeySizes; }
namespace System::Security::Cryptography { class RC2; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C367020)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_CREATE_OFFSET UNITYSDK_OFFSET(0x1C366FD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_CTOR_OFFSET UNITYSDK_OFFSET(0x1C366E70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_GET_EFFECTIVEKEYSIZE_OFFSET UNITYSDK_OFFSET(0x1C366EE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1C366EF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1C366F00)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RC2_TypeDefinitionIndex = 1039;

	class RC2 : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		::System::Int32 EffectiveKeySizeValue; // 0x48
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)UnitySDK::FromName("System.Security.Cryptography", "RC2")->GetStaticField(0x1EBA0);
		}

		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)UnitySDK::FromName("System.Security.Cryptography", "RC2")->GetStaticField(0x1EBA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_CCTOR_OFFSET))();
		}

		::System::Int32 get_EffectiveKeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_GET_EFFECTIVEKEYSIZE_OFFSET))(this);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Void set_KeySize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_SET_KEYSIZE_OFFSET))(this, a1);
		}

		static ::System::Security::Cryptography::RC2* Create()
		{
			return ((::System::Security::Cryptography::RC2*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2_CREATE_OFFSET))();
		}

	};
}
