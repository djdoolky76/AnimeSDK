#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOBASESDK_F967B281035210FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoBaseSDK_F967B281035210FF_TypeDefinitionIndex = 15805;

	class MiHoYoBaseSDK_F967B281035210FF : public ::System::Object
	{
	public:
		::System::String* E3A696D08708C07C; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_F967B281035210FF__CTOR_OFFSET))(this);
		}
	};
}
