#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

namespace System { class String; }

#define MONO_SECURITY_CRYPTOGRAPHY_MD4_4757080B31DFFE01_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1F8D4AB0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4_4757080B31DFFE01_CREATE_OFFSET UNITYSDK_OFFSET(0x1F8D4A60)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4_4757080B31DFFE01__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D4A50)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD4_4757080B31DFFE01_TypeDefinitionIndex = 2457;

	class MD4_4757080B31DFFE01 : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4_4757080B31DFFE01__CTOR_OFFSET))(this);
		}

		static ::Mono::Security::Cryptography::MD4_4757080B31DFFE01* Create()
		{
			return ((::Mono::Security::Cryptography::MD4_4757080B31DFFE01*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4_4757080B31DFFE01_CREATE_OFFSET))();
		}

		static ::Mono::Security::Cryptography::MD4_4757080B31DFFE01* Create_1(::System::String* hashName)
		{
			return ((::Mono::Security::Cryptography::MD4_4757080B31DFFE01*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4_4757080B31DFFE01_CREATE_1_OFFSET))(hashName);
		}
	};
}
