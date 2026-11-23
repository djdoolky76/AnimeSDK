#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_FF703C3C757A7FC3_F150D4A525F495E9_OFFSET UNITYSDK_OFFSET(0x29FFD50)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_FF703C3C757A7FC3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int MiHoYoSDKDll_FF703C3C757A7FC3_TypeDefinitionIndex = 12747;

	class MiHoYoSDKDll_FF703C3C757A7FC3 : public ::System::Object
	{
	public:
		::System::String* A342D5344F7596A8; // 0x10
		::System::Boolean F811DDDB5F94B487; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_FF703C3C757A7FC3__CTOR_OFFSET))(this);
		}

		::System::Void F150D4A525F495E9(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_FF703C3C757A7FC3_F150D4A525F495E9_OFFSET))(this, B083BE7841B347C4);
		}
	};
}
