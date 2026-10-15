#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_UPLOADER_BASEUPLOADERWORKER_CTOR_OFFSET UNITYSDK_OFFSET(0xB065B00)

namespace MiHoYo::SDK::Uploader
{
	class BaseUploaderWorker : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_BASEUPLOADERWORKER_CTOR_OFFSET))(this);
		}

	};
}
