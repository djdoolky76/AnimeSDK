#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class ICollector; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Entitas
{
	template <typename T>
	class ReactiveSystem_1 : public ::System::Object
	{
	public:
		::Entitas::ICollector* _collector; // 0x0
		::System::Collections::Generic::List_1<T>* _buffer; // 0x0
		::System::String* _toStringCache; // 0x0
	};
}
