#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections { class IEnumerable; }
namespace System::Collections { class IEnumerator; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable__OfTypeIterator_d__97_1_TypeDefinitionIndex = 3160;

	template <typename T>
	class Enumerable__OfTypeIterator_d__97_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::IEnumerable* source; // 0x0
		::System::Collections::IEnumerable* __3__source; // 0x0
		::System::Collections::IEnumerator* __7__wrap1; // 0x0
	};
}
