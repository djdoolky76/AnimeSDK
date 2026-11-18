#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace SGF::SEvent
{
	inline static constexpr unsigned int DelegateChain_2_TypeDefinitionIndex = 8391;

	template <typename T1, typename T2>
	class DelegateChain_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Func_2<T1, T2>*>* handlers; // 0x0
		::System::Func_2<T2, ::System::Boolean>* shouldContinue; // 0x0
		T2 defaultValue; // 0x0
	};
}
