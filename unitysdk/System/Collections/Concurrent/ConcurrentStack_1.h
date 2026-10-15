#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentStack_1_TypeDefinitionIndex = 1524;

	template <typename T>
	class ConcurrentStack_1 : public ::System::Object
	{
	public:
		::System::Object* _head; // 0x0
	};
}
