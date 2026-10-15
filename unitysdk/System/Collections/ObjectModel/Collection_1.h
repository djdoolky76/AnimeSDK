#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace System::Collections::ObjectModel
{
	template <typename T>
	class Collection_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<T>* items; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
