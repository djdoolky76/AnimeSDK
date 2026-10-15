#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Immutable { class ImmutableList; }

namespace System::Collections::Immutable
{
	template <typename T>
	class ImmutableList_1_Builder : public ::System::Object
	{
	public:
		::System::Object* _root; // 0x0
		::System::Collections::Immutable::ImmutableList* _immutable; // 0x0
		::System::Int32 _version; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
