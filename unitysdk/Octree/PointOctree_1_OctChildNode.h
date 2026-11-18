#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Octree
{
	inline static constexpr unsigned int PointOctree_1_OctChildNode_TypeDefinitionIndex = 66466;

	template <typename T>
	struct alignas(8) PointOctree_1_OctChildNode
	{
		::System::Object* chNode0; // 0x0
		::System::Object* chNode1; // 0x0
		::System::Object* chNode2; // 0x0
		::System::Object* chNode3; // 0x0
		::System::Object* chNode4; // 0x0
		::System::Object* chNode5; // 0x0
		::System::Object* chNode6; // 0x0
		::System::Object* chNode7; // 0x0
	};
}
