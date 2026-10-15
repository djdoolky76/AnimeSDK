#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
namespace System::Threading::Tasks { class Task; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask_TypeDefinitionIndex = 45705;

	template <typename T>
	class ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask : public ::System::Object
	{
	public:
		::System::Threading::Tasks::Task* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		T current; // 0x0
		::System::Boolean called; // 0x0
	};
}
