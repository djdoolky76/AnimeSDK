#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int BidirectionalDictionary_2_TypeDefinitionIndex = 9653;

	template <typename T1, typename T2>
	class BidirectionalDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<T1, T2>* _firstToSecond; // 0x0
		::System::Collections::Generic::IDictionary_2<T2, T1>* _secondToFirst; // 0x0
		::System::String* _duplicateFirstErrorMessage; // 0x0
		::System::String* _duplicateSecondErrorMessage; // 0x0
	};
}
