#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_IKCPCLIENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E63D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int IKCPClient_TypeDefinitionIndex = 47155;

	class IKCPClient : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCLIENT_CTOR_OFFSET))(this);
		}

	};
}
