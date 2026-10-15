#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int ReadOnlyDictionary_2_TypeDefinitionIndex = 1508;

	template <typename T1, typename T2>
	class ReadOnlyDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<T1, T2>* m_dictionary; // 0x0
		::System::Object* m_syncRoot; // 0x0
		::System::Object* m_keys; // 0x0
		::System::Object* m_values; // 0x0
	};
}
