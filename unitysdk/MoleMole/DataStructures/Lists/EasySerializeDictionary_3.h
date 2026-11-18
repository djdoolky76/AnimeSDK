#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole::DataStructures::Lists
{
	inline static constexpr unsigned int EasySerializeDictionary_3_TypeDefinitionIndex = 28234;

	template <typename T1, typename T2, typename T3>
	class EasySerializeDictionary_3 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T1, T2>* __DicData_k__BackingField; // 0x0
		::System::Collections::Generic::List_1<T3>* _ListData; // 0x0
		::System::String* _CustomInspectorName_k__BackingField; // 0x0
	};
}
