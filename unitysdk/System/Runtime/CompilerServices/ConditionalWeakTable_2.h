#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/Ephemeron.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ConditionalWeakTable_2_TypeDefinitionIndex = 1399;

	template <typename T1, typename T2>
	class ConditionalWeakTable_2 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Runtime::CompilerServices::Ephemeron>* data; // 0x0
		::System::Object* _lock; // 0x0
		::System::Int32 size; // 0x0
	};
}
