#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace System::Data
{
	inline static constexpr unsigned int RBTree_1_Node_TypeDefinitionIndex = 37327;

	template <typename T>
	struct alignas(8) RBTree_1_Node
	{
		::System::Int32 _selfId; // 0x0
		::System::Int32 _leftId; // 0x0
		::System::Int32 _rightId; // 0x0
		::System::Int32 _parentId; // 0x0
		::System::Int32 _nextId; // 0x0
		::System::Int32 _subTreeSize; // 0x0
		T _keyOfNode; // 0x0
		::System::Object* _nodeColor; // 0x0
	};
}
