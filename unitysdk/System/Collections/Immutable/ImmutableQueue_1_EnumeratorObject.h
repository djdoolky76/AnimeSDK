#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Immutable { class ImmutableQueue; }
namespace System::Collections::Immutable { class ImmutableStack; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableQueue_1_EnumeratorObject_TypeDefinitionIndex = 6645;

	template <typename T>
	class ImmutableQueue_1_EnumeratorObject : public ::System::Object
	{
	public:
		::System::Collections::Immutable::ImmutableQueue* _originalQueue; // 0x0
		::System::Collections::Immutable::ImmutableStack* _remainingForwardsStack; // 0x0
		::System::Collections::Immutable::ImmutableStack* _remainingBackwardsStack; // 0x0
		::System::Boolean _disposed; // 0x0
	};
}
