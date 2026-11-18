#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Octree/BoundingBox.h"
#include "unitysdk/System/Numerics/Vector3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Octree
{
	inline static constexpr unsigned int PointOctree_1_Node_TypeDefinitionIndex = 66463;

	template <typename T>
	struct alignas(8) PointOctree_1_Node
	{
		static ::System::Int32* StaticGet_s_checkCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointOctree_1_Node_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 NumObjectsAllowed = 0x8; // 0x0
		::System::Numerics::Vector3 _Center_k__BackingField; // 0x0
		::System::Single _SideLength_k__BackingField; // 0x0
		::System::Single _minSize; // 0x0
		::Octree::BoundingBox _bounds; // 0x0
		::System::Collections::Generic::List_1<::System::Object*>* _objects; // 0x0
		::System::Int32 __objects; // 0x0
		::Il2CppArray<::System::Object*>* _children; // 0x0
		::System::Int32 __childrenIndex; // 0x0
		::Il2CppArray<::Octree::BoundingBox>* _childBounds; // 0x0
		::System::Int32 __childBBIndex; // 0x0
		::System::Numerics::Vector3 _actualBoundsSize; // 0x0
	};
}
