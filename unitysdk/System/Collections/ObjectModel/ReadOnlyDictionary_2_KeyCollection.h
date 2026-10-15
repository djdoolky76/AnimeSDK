#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

namespace System::Collections::ObjectModel
{
	template <typename T1, typename T2>
	class ReadOnlyDictionary_2_KeyCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::ICollection_1<T1>* m_collection; // 0x0
		::System::Object* m_syncRoot; // 0x0
	};
}
