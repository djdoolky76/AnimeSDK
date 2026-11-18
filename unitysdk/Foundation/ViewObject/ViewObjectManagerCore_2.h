#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject::Container { template <typename T> class TSparseList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManagerCore_2_TypeDefinitionIndex = 47717;

	template <typename T1, typename T2>
	class ViewObjectManagerCore_2 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::Container::TSparseList_1<T1>* ViewObjectContainer; // 0x0
		::System::Collections::Generic::List_1<T2>* WaitDestroyViewObject; // 0x0
		::System::Boolean _isFlushingViewObjectState; // 0x0
		::System::Collections::Generic::List_1<T2>* _flushingViewObjects; // 0x0
	};
}
