#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Collections::Immutable
{
	template <typename T>
	class ImmutableSortedSet_1_Node : public ::System::Object
	{
	public:
		T _key; // 0x0
		::System::Boolean _frozen; // 0x0
		::System::Byte _height; // 0x0
		::System::Int32 _count; // 0x0
		::System::Object* _left; // 0x0
		::System::Object* _right; // 0x0
		static ::System::Object** StaticGet_EmptyNode()
		{
			return (::System::Object**)UnitySDK::FromName("System.Collections.Immutable", "Node")->GetStaticField(0x0);
		}

	};
}
