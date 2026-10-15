#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::TAUtils
{
	template <typename T>
	class ReusableList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* _Items; // 0x0
		::System::Int32 _Count; // 0x0
	};
}
