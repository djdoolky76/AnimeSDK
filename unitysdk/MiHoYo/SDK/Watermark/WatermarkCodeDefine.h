#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_WATERMARK_WATERMARKCODEDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE9230)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkCodeDefine_TypeDefinitionIndex = 8865;

	class WatermarkCodeDefine : public ::System::Object
	{
	public:
		// static const ::System::Object SUCCESS; // 0x0
		// static const ::System::Object FAILED; // 0x0
		// static const ::System::Object DISABLED; // 0x0
		// static const ::System::Object PLAT_NOT_SUPPORT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKCODEDEFINE_CTOR_OFFSET))(this);
		}

	};
}
