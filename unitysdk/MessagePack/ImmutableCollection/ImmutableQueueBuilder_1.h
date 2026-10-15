#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Immutable { class ImmutableQueue; }

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int ImmutableQueueBuilder_1_TypeDefinitionIndex = 7367;

	template <typename T>
	class ImmutableQueueBuilder_1 : public ::System::Object
	{
	public:
		::System::Collections::Immutable::ImmutableQueue* _Q_k__BackingField; // 0x0
	};
}
