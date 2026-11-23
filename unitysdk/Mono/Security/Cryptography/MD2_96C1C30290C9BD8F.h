#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

#define MONO_SECURITY_CRYPTOGRAPHY_MD2_96C1C30290C9BD8F_CREATE_OFFSET UNITYSDK_OFFSET(0x3B1B470)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2_96C1C30290C9BD8F__CTOR_OFFSET UNITYSDK_OFFSET(0x3B1B4C0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD2_96C1C30290C9BD8F_TypeDefinitionIndex = 19251;

	class MD2_96C1C30290C9BD8F : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2_96C1C30290C9BD8F__CTOR_OFFSET))(this);
		}

		static ::Mono::Security::Cryptography::MD2_96C1C30290C9BD8F* Create()
		{
			return ((::Mono::Security::Cryptography::MD2_96C1C30290C9BD8F*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2_96C1C30290C9BD8F_CREATE_OFFSET))();
		}
	};
}
