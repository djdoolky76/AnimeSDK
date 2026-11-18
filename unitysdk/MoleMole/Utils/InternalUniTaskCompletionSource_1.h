#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/TypeErasedCompletionSourceImpl_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils
{
	inline static constexpr unsigned int InternalUniTaskCompletionSource_1_TypeDefinitionIndex = 59613;

	template <typename T>
	class InternalUniTaskCompletionSource_1 : public ::System::Object
	{
	public:
		::MoleMole::Utils::TypeErasedCompletionSourceImpl_1<T> _impl; // 0x0
	};
}
