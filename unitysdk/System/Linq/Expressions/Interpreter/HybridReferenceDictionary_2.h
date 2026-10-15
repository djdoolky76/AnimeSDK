#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace System::Linq::Expressions::Interpreter
{
	template <typename T1, typename T2>
	class HybridReferenceDictionary_2 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Collections::Generic::KeyValuePair*>* _keysAndValues; // 0x0
		::System::Collections::Generic::Dictionary_2<T1, T2>* _dict; // 0x0
	};
}
