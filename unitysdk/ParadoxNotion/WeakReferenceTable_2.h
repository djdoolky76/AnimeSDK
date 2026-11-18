#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace ParadoxNotion
{
	inline static constexpr unsigned int WeakReferenceTable_2_TypeDefinitionIndex = 29826;

	template <typename T1, typename T2>
	class WeakReferenceTable_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::WeakReference_1<T1>*>* keys; // 0x0
		::System::Collections::Generic::List_1<T2>* values; // 0x0
	};
}
