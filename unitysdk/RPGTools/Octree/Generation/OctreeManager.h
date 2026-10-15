#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeManager_LinkData.h"
class GPFEOAGPKIE;
class NGLFOJKOKBH;
namespace RPGTools::Octree::Generation { class OctreeAsset; }
namespace RPGTools::Octree::Generation { class OctreeLinkData; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_BUILDNAVIGATIONPATH_OFFSET UNITYSDK_OFFSET(0xE8A64D0)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_BUILDOCTREE_OFFSET UNITYSDK_OFFSET(0xE8A5B00)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xE8A6710)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_DISPOSETREE_OFFSET UNITYSDK_OFFSET(0xE8A5AA0)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_GET_TREE_OFFSET UNITYSDK_OFFSET(0xE8A64C0)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE8A5A20)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xE8A58D0)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER__BUILDOCTREE_B__11_0_OFFSET UNITYSDK_OFFSET(0xE8A6770)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeManager_TypeDefinitionIndex = 48886;

	class OctreeManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean ShowDebugGizmos; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::Transform* Origin; // 0x20
		::System::Single Size; // 0x28
		::System::Int32 MaxDepth; // 0x2C
		::UnityEngine::LayerMask LayerMask; // 0x30
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Object*>* LinkDatas; // 0x38
		::Il2CppArray<::System::Object*>* AreaDatas; // 0x40
		::RPGTools::Octree::Generation::OctreeAsset* BuildData; // 0x48
		::NGLFOJKOKBH* FBAGIJDJHIB; // 0x50
		::UnityEngine::Transform* Start; // 0x58
		::UnityEngine::Transform* End; // 0x60
		::GPFEOAGPKIE* ANJPDCEFJDJ; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void BuildOctree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_BUILDOCTREE_OFFSET))(this);
		}

		::System::Void DisposeTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_DISPOSETREE_OFFSET))(this);
		}

		::NGLFOJKOKBH* get_Tree()
		{
			return ((::NGLFOJKOKBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_GET_TREE_OFFSET))(this);
		}

		::System::Void BuildNavigationPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_BUILDNAVIGATIONPATH_OFFSET))(this);
		}

		::RPGTools::Octree::Generation::OctreeLinkData* _BuildOctree_b__11_0(::RPGTools::Octree::Generation::OctreeManager_LinkData a1)
		{
			return ((::RPGTools::Octree::Generation::OctreeLinkData*(*)(::PVOID, ::RPGTools::Octree::Generation::OctreeManager_LinkData))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER__BUILDOCTREE_B__11_0_OFFSET))(this, a1);
		}

	};
}
