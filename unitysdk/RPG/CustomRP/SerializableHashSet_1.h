#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/SerializableHashSetBase.h"
namespace System { class Object; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SerializableHashSet_1_TypeDefinitionIndex = 51882;

	template <typename T>
	class SerializableHashSet_1 : public ::RPG::CustomRP::SerializableHashSetBase
	{
	public:
		::System::Object* m_hashSet; // 0x0
		::Il2CppArray<T>* m_keys; // 0x0
	};
}
