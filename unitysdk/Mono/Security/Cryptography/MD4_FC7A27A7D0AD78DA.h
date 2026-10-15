#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"
namespace Mono::Security::Cryptography { class MD4_FC7A27A7D0AD78DA; }

#define MONO_SECURITY_CRYPTOGRAPHY_MD4_FC7A27A7D0AD78DA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C02F5A0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4_FC7A27A7D0AD78DA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C02F590)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD4_FC7A27A7D0AD78DA_TypeDefinitionIndex = 2304;

	class MD4_FC7A27A7D0AD78DA : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4_FC7A27A7D0AD78DA_CTOR_OFFSET))(this);
		}

		static ::Mono::Security::Cryptography::MD4_FC7A27A7D0AD78DA* Create()
		{
			return ((::Mono::Security::Cryptography::MD4_FC7A27A7D0AD78DA*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4_FC7A27A7D0AD78DA_CREATE_OFFSET))();
		}

	};
}
