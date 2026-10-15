#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"
namespace Mono::Security::Cryptography { class MD4; }

#define MONO_SECURITY_CRYPTOGRAPHY_MD4_CREATE_OFFSET UNITYSDK_OFFSET(0x1C077520)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4_CTOR_OFFSET UNITYSDK_OFFSET(0x1C077510)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD4_TypeDefinitionIndex = 69;

	class MD4 : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4_CTOR_OFFSET))(this);
		}

		static ::Mono::Security::Cryptography::MD4* Create()
		{
			return ((::Mono::Security::Cryptography::MD4*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4_CREATE_OFFSET))();
		}

	};
}
