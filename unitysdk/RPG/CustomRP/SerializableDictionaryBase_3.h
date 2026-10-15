#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/SerializableDictionaryBase.h"
namespace System { class Object; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SerializableDictionaryBase_3_TypeDefinitionIndex = 51874;

	template <typename T1, typename T2, typename T3>
	class SerializableDictionaryBase_3 : public ::RPG::CustomRP::SerializableDictionaryBase
	{
	public:
		::System::Object* m_dict; // 0x0
		::Il2CppArray<T1>* m_keys; // 0x0
		::Il2CppArray<T2>* m_values; // 0x0
	};
}
