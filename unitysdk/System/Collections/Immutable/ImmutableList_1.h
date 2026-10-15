#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Immutable { class ImmutableList; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableList_1_TypeDefinitionIndex = 6639;

	template <typename T>
	class ImmutableList_1 : public ::System::Object
	{
	public:
		::System::Object* _root; // 0x0
		static ::System::Collections::Immutable::ImmutableList** StaticGet_Empty()
		{
			return (::System::Collections::Immutable::ImmutableList**)UnitySDK::FromName("System.Collections.Immutable", "ImmutableList`1")->GetStaticField(0x0);
		}

	};
}
