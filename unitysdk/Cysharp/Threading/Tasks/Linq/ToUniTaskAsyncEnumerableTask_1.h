#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Threading::Tasks { class Task; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T>
	class ToUniTaskAsyncEnumerableTask_1 : public ::System::Object
	{
	public:
		::System::Threading::Tasks::Task* source; // 0x0
	};
}
