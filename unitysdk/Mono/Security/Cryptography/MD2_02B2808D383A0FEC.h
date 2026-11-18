#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

namespace System { class String; }

#define MONO_SECURITY_CRYPTOGRAPHY_MD2_02B2808D383A0FEC_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1F8D49C0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2_02B2808D383A0FEC_CREATE_OFFSET UNITYSDK_OFFSET(0x1F8D4970)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2_02B2808D383A0FEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D4960)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD2_02B2808D383A0FEC_TypeDefinitionIndex = 2455;

	class MD2_02B2808D383A0FEC : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2_02B2808D383A0FEC__CTOR_OFFSET))(this);
		}

		static ::Mono::Security::Cryptography::MD2_02B2808D383A0FEC* Create()
		{
			return ((::Mono::Security::Cryptography::MD2_02B2808D383A0FEC*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2_02B2808D383A0FEC_CREATE_OFFSET))();
		}

		static ::Mono::Security::Cryptography::MD2_02B2808D383A0FEC* Create_1(::System::String* hashName)
		{
			return ((::Mono::Security::Cryptography::MD2_02B2808D383A0FEC*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2_02B2808D383A0FEC_CREATE_1_OFFSET))(hashName);
		}
	};
}
