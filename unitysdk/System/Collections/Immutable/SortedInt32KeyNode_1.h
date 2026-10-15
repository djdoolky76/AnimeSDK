#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	template <typename T>
	class SortedInt32KeyNode_1 : public ::System::Object
	{
	public:
		::System::Int32 _key; // 0x0
		T _value; // 0x0
		::System::Boolean _frozen; // 0x0
		::System::Byte _height; // 0x0
		::System::Collections::Immutable::SortedInt32KeyNode_1<T>* _left; // 0x0
		::System::Collections::Immutable::SortedInt32KeyNode_1<T>* _right; // 0x0
		static ::System::Collections::Immutable::SortedInt32KeyNode_1<T>** StaticGet_EmptyNode()
		{
			return (::System::Collections::Immutable::SortedInt32KeyNode_1<T>**)UnitySDK::FromName("System.Collections.Immutable", "SortedInt32KeyNode`1")->GetStaticField(0x0);
		}

	};
}
