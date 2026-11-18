#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_UPLOADER_BASEUPLOADERWORKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9732A0)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int BaseUploaderWorker_TypeDefinitionIndex = 35686;

	class BaseUploaderWorker : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_BASEUPLOADERWORKER__CTOR_OFFSET))(this);
		}
	};
}
