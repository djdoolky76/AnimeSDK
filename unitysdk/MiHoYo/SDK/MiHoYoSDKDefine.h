#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_MIHOYOSDKDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0xAFC9C30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKDefine_TypeDefinitionIndex = 46332;

	class MiHoYoSDKDefine : public ::System::Object
	{
	public:
		// static const ::System::String* Version; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKDEFINE_CTOR_OFFSET))(this);
		}

	};
}
