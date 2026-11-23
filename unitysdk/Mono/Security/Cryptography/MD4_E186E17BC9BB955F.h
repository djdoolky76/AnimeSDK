#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

#define MONO_SECURITY_CRYPTOGRAPHY_MD4_E186E17BC9BB955F_CREATE_OFFSET UNITYSDK_OFFSET(0x3B39B30)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4_E186E17BC9BB955F__CTOR_OFFSET UNITYSDK_OFFSET(0x3B1B4C0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD4_E186E17BC9BB955F_TypeDefinitionIndex = 19341;

	class MD4_E186E17BC9BB955F : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		static ::Mono::Security::Cryptography::MD4_E186E17BC9BB955F* Create()
		{
			return ((::Mono::Security::Cryptography::MD4_E186E17BC9BB955F*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4_E186E17BC9BB955F_CREATE_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4_E186E17BC9BB955F__CTOR_OFFSET))(this);
		}
	};
}
