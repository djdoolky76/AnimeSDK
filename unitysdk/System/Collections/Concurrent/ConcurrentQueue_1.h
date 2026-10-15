#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentQueue_1_TypeDefinitionIndex = 1519;

	template <typename T>
	class ConcurrentQueue_1 : public ::System::Object
	{
	public:
		::System::Object* _crossSegmentLock; // 0x0
		::System::Object* _tail; // 0x0
		::System::Object* _head; // 0x0
	};
}
