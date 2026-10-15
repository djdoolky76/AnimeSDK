#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/NodeColor.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Collections::Generic
{
	template <typename T>
	class SortedSet_1_Node : public ::System::Object
	{
	public:
		T _Item_k__BackingField; // 0x0
		::System::Object* _Left_k__BackingField; // 0x0
		::System::Object* _Right_k__BackingField; // 0x0
		::System::Collections::Generic::NodeColor _Color_k__BackingField; // 0x0
	};
}
