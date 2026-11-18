#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Octree/BoundingBox.h"
#include "unitysdk/System/Numerics/Vector3.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Octree
{
	inline static constexpr unsigned int BoundsOctree_1_Node_TypeDefinitionIndex = 61413;

	template <typename T>
	class BoundsOctree_1_Node : public ::System::Object
	{
	public:
		// static const ::System::Int32 NumObjectsAllowed = 0x8; // 0x0
		::System::Numerics::Vector3 _Center_k__BackingField; // 0x0
		::System::Single _BaseLength_k__BackingField; // 0x0
		::System::Single _looseness; // 0x0
		::System::Single _minSize; // 0x0
		::System::Single _adjLength; // 0x0
		::Octree::BoundingBox _bounds; // 0x0
		::System::Collections::Generic::List_1<::System::Object*>* _objects; // 0x0
		::Il2CppArray<::System::Object*>* _children; // 0x0
		::Il2CppArray<::Octree::BoundingBox>* _childBounds; // 0x0
	};
}
