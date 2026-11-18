#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_CRYPTOGRAPHY_PKCS8__CTOR_OFFSET UNITYSDK_OFFSET(0x1D761940)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int PKCS8_TypeDefinitionIndex = 71;

	class PKCS8 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_PKCS8__CTOR_OFFSET))(this);
		}
	};
}
