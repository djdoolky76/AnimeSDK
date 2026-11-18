#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int DictionaryList_2_TypeDefinitionIndex = 36028;

	template <typename T1, typename T2>
	class DictionaryList_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T1>* _list; // 0x0
		::System::Collections::Generic::Dictionary_2<T2, T1>* _dict; // 0x0
	};
}
