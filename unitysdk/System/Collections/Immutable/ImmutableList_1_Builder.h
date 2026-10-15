#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Immutable { template <typename T> class ImmutableList_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableList_1_Builder_TypeDefinitionIndex = 6640;

	template <typename T>
	class ImmutableList_1_Builder : public ::System::Object
	{
	public:
		::System::Object* _root; // 0x0
		::System::Collections::Immutable::ImmutableList_1<T>* _immutable; // 0x0
		::System::Int32 _version; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
