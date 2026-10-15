#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_HOYOUI_SERIALIZABLEDICTIONARYBASE_STORAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xAFB0180)

namespace MiHoYo::SDK::HoYoUI
{
	class SerializableDictionaryBase_Storage : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_SERIALIZABLEDICTIONARYBASE_STORAGE_CTOR_OFFSET))(this);
		}

	};
}
