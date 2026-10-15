#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Concurrent/PaddedHeadAndTail.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Collections::Concurrent
{
	template <typename T>
	class ConcurrentQueue_1_Segment : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _slots; // 0x0
		::System::Int32 _slotsMask; // 0x0
		::System::Collections::Concurrent::PaddedHeadAndTail _headAndTail; // 0x0
		::System::Boolean _preservedForObservation; // 0x0
		::System::Boolean _frozenForEnqueues; // 0x0
		::System::Object* _nextSegment; // 0x0
	};
}
