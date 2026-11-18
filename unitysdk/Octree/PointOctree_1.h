#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Octree/Native/TNativeSizeArea_1.h"
#include "unitysdk/Octree/OctChildBoundingBox.h"
#include "unitysdk/System/Object.h"

namespace Octree
{
	inline static constexpr unsigned int PointOctree_1_TypeDefinitionIndex = 66462;

	template <typename T>
	class PointOctree_1 : public ::System::Object
	{
	public:
		::System::Object* _rootNode; // 0x0
		::System::Single _initialSize; // 0x0
		::System::Single _minSize; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
		::Octree::Native::TNativeSizeArea_1<::Octree::OctChildBoundingBox> _childBBArea; // 0x0
	};
}
