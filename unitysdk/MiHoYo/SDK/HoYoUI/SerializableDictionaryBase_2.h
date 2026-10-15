#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoUI/SerializableDictionaryBase.h"
namespace System { class Object; }

namespace MiHoYo::SDK::HoYoUI
{
	template <typename T1, typename T2>
	class SerializableDictionaryBase_2 : public ::MiHoYo::SDK::HoYoUI::SerializableDictionaryBase
	{
	public:
		::System::Object* m_dict; // 0x0
		::Il2CppArray<T1>* m_keys; // 0x0
		::Il2CppArray<T2>* m_values; // 0x0
	};
}
