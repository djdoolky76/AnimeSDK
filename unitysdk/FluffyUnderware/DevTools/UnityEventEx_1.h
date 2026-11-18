#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int UnityEventEx_1_TypeDefinitionIndex = 28382;

	template <typename T>
	class UnityEventEx_1
	{
	public:
		::System::Object* mCallerList; // 0x0
		::System::Reflection::MethodInfo* mCallsCount; // 0x0
		::System::Int32 mCount; // 0x0
	};
}
