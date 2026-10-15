#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Collections::Concurrent
{
	template <typename T>
	class ConcurrentBag_1_WorkStealingQueue : public ::System::Object
	{
	public:
		::System::Int32 _headIndex; // 0x0
		::System::Int32 _tailIndex; // 0x0
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _mask; // 0x0
		::System::Int32 _addTakeCount; // 0x0
		::System::Int32 _stealCount; // 0x0
		::System::Int32 _currentOp; // 0x0
		::System::Boolean _frozen; // 0x0
		::System::Object* _nextQueue; // 0x0
		::System::Int32 _ownerThreadId; // 0x0
	};
}
