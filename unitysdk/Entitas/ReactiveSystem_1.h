#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { template <typename T> class ICollector_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Entitas
{
	inline static constexpr unsigned int ReactiveSystem_1_TypeDefinitionIndex = 10054;

	template <typename T>
	class ReactiveSystem_1 : public ::System::Object
	{
	public:
		::Entitas::ICollector_1<T>* _collector; // 0x0
		::System::Collections::Generic::List_1<T>* _buffer; // 0x0
		::System::String* _toStringCache; // 0x0
	};
}
