#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class BLCMFPJDHCC;
namespace RPGTools::Octree::Generation { class OctreeManager; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD4DDC0)
#define RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BD4DD50)
#define RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1BD4DB30)
#define RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BD4DD10)
#define RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_RELINK_OFFSET UNITYSDK_OFFSET(0x1BD4D990)
#define RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_UNLINK_OFFSET UNITYSDK_OFFSET(0x1BD4DAD0)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeLinkManager_TypeDefinitionIndex = 49942;

	class OctreeLinkManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPGTools::Octree::Generation::OctreeManager*>* Octrees; // 0x18
		::BLCMFPJDHCC* Link; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Relink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_RELINK_OFFSET))(this);
		}

		::System::Void Unlink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_UNLINK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_ONDISABLE_OFFSET))(this);
		}

	};
}
