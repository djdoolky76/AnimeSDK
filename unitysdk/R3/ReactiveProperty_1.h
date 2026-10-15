#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace R3
{
	inline static constexpr unsigned int ReactiveProperty_1_TypeDefinitionIndex = 35961;

	template <typename T>
	class ReactiveProperty_1
	{
	public:
		::System::Byte completeState; // 0x0
		::System::Exception* error; // 0x0
		T currentValue; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* equalityComparer; // 0x0
		::System::Object* root; // 0x0
	};
}
