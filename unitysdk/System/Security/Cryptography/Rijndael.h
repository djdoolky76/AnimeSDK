#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"
namespace System::Security::Cryptography { class KeySizes; }
namespace System::Security::Cryptography { class Rijndael; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0D6CC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1C0D6B50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0D6AE0)

namespace System::Security::Cryptography
{
	class Rijndael : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)UnitySDK::FromName("System.Security.Cryptography", "Rijndael")->GetStaticField(0x188D0);
		}

		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)UnitySDK::FromName("System.Security.Cryptography", "Rijndael")->GetStaticField(0x188D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_CCTOR_OFFSET))();
		}

		static ::System::Security::Cryptography::Rijndael* Create()
		{
			return ((::System::Security::Cryptography::Rijndael*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_CREATE_OFFSET))();
		}

	};
}
