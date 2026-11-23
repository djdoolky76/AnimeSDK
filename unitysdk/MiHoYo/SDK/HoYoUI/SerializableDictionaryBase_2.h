#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EB88A26EFE24C4B9/B4BD471E66785EC2.h"

namespace System { class Object; }

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int SerializableDictionaryBase_2_TypeDefinitionIndex = 15794;

	template <typename T1, typename T2>
	class SerializableDictionaryBase_2 : public ::EB88A26EFE24C4B9::B4BD471E66785EC2
	{
	public:
		::System::Object* m_dict; // 0x0
		::Il2CppArray<T1>* m_keys; // 0x0
		::Il2CppArray<T2>* m_values; // 0x0
	};
}
