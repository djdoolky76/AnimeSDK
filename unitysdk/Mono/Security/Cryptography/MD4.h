#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

#define MONO_SECURITY_CRYPTOGRAPHY_MD4_CREATE_OFFSET UNITYSDK_OFFSET(0x3C68A90)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4__CTOR_OFFSET UNITYSDK_OFFSET(0x3B1B4C0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD4_TypeDefinitionIndex = 11653;

	class MD4 : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		static ::Mono::Security::Cryptography::MD4* Create()
		{
			return ((::Mono::Security::Cryptography::MD4*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4_CREATE_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4__CTOR_OFFSET))(this);
		}
	};
}
