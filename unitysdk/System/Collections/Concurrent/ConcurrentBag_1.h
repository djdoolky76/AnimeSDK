#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Threading { template <typename T> class ThreadLocal_1; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentBag_1_TypeDefinitionIndex = 3056;

	template <typename T>
	class ConcurrentBag_1 : public ::System::Object
	{
	public:
		::System::Threading::ThreadLocal_1<::System::Object*>* _locals; // 0x0
		::System::Object* _workStealingQueues; // 0x0
	};
}
