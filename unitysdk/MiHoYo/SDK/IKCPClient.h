#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_IKCPCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F428730)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int IKCPClient_TypeDefinitionIndex = 35155;

	class IKCPClient : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCLIENT__CTOR_OFFSET))(this);
		}
	};
}
