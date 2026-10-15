#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoUI/SerializableDictionaryBase_Storage.h"

namespace MiHoYo::SDK::HoYoUI
{
	template <typename T>
	class SerializableDictionary_Storage_1 : public ::MiHoYo::SDK::HoYoUI::SerializableDictionaryBase_Storage
	{
	public:
		T data; // 0x0
	};
}
