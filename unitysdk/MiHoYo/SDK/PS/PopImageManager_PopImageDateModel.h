#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PopImageType.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PS_POPIMAGEMANAGER_POPIMAGEDATEMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF779D0)

namespace MiHoYo::SDK::PS
{
	class PopImageManager_PopImageDateModel : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::MiHoYo::SDK::PopImageType mode; // 0x14
		::System::Int32 days; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_POPIMAGEMANAGER_POPIMAGEDATEMODEL_CTOR_OFFSET))(this);
		}

	};
}
