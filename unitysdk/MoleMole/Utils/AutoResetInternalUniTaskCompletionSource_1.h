#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/TypeErasedCompletionSourceImpl_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils
{
	inline static constexpr unsigned int AutoResetInternalUniTaskCompletionSource_1_TypeDefinitionIndex = 59000;

	template <typename T>
	class AutoResetInternalUniTaskCompletionSource_1 : public ::System::Object
	{
	public:
		::MoleMole::Utils::TypeErasedCompletionSourceImpl_1<T> _impl; // 0x0
	};
}
