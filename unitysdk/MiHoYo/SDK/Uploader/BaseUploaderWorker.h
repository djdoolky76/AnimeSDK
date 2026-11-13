#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_UPLOADER_BASEUPLOADERWORKER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0BC90)

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int BaseUploaderWorker_TypeDefinitionIndex = 47686;

	class BaseUploaderWorker : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADER_BASEUPLOADERWORKER_CTOR_OFFSET))(this);
		}

	};
}
