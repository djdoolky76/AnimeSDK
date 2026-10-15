#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableSortedDictionary_2_Node_TypeDefinitionIndex = 6650;

	template <typename T1, typename T2>
	class ImmutableSortedDictionary_2_Node : public ::System::Object
	{
	public:
		T1 _key; // 0x0
		T2 _value; // 0x0
		::System::Boolean _frozen; // 0x0
		::System::Byte _height; // 0x0
		::System::Object* _left; // 0x0
		::System::Object* _right; // 0x0
		static ::System::Object** StaticGet_EmptyNode()
		{
			return (::System::Object**)UnitySDK::FromName("System.Collections.Immutable", "Node")->GetStaticField(0x0);
		}

	};
}
