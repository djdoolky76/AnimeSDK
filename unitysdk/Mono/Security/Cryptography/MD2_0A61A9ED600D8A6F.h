#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"
namespace Mono::Security::Cryptography { class MD2_0A61A9ED600D8A6F; }

#define MONO_SECURITY_CRYPTOGRAPHY_MD2_0A61A9ED600D8A6F_CREATE_OFFSET UNITYSDK_OFFSET(0x1C02ED40)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2_0A61A9ED600D8A6F_CTOR_OFFSET UNITYSDK_OFFSET(0x1C02ED30)

namespace Mono::Security::Cryptography
{
	class MD2_0A61A9ED600D8A6F : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2_0A61A9ED600D8A6F_CTOR_OFFSET))(this);
		}

		static ::Mono::Security::Cryptography::MD2_0A61A9ED600D8A6F* Create()
		{
			return ((::Mono::Security::Cryptography::MD2_0A61A9ED600D8A6F*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2_0A61A9ED600D8A6F_CREATE_OFFSET))();
		}

	};
}
