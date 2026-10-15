#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections { class IDictionary; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int DictionaryWrapper_2_TypeDefinitionIndex = 9665;

	template <typename T1, typename T2>
	class DictionaryWrapper_2 : public ::System::Object
	{
	public:
		::System::Collections::IDictionary* _dictionary; // 0x0
		::System::Collections::Generic::IDictionary_2<T1, T2>* _genericDictionary; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
