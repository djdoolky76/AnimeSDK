#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Threading::Tasks { class Task; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToUniTaskAsyncEnumerableTask_1_TypeDefinitionIndex = 45704;

	template <typename T>
	class ToUniTaskAsyncEnumerableTask_1 : public ::System::Object
	{
	public:
		::System::Threading::Tasks::Task* source; // 0x0
	};
}
