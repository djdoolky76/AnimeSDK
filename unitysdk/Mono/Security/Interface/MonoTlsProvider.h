#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C033B70)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoTlsProvider_TypeDefinitionIndex = 2294;

	class MonoTlsProvider : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_CTOR_OFFSET))(this);
		}

	};
}
