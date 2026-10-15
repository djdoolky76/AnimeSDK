#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_IKCPCLIENT_CTOR_OFFSET UNITYSDK_OFFSET(0xAFB2EB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int IKCPClient_TypeDefinitionIndex = 46126;

	class IKCPClient : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCLIENT_CTOR_OFFSET))(this);
		}

	};
}
