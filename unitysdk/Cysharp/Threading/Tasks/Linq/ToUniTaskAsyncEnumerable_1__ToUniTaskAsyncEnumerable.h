#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable_TypeDefinitionIndex = 45703;

	template <typename T>
	class ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<T>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* enumerator; // 0x0
	};
}
