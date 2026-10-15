#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeNodeNativeChildren.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPGTools::Octree::Generation { class OctreeNodeData; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVEDATA_BIKABOFADBP_OFFSET UNITYSDK_OFFSET(0xF73A0)
#define RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xF7320)
#define RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVEDATA_DCDDKNNINEB_OFFSET UNITYSDK_OFFSET(0xF7390)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeNodeNativeData_TypeDefinitionIndex = 48880;

	struct alignas(4) OctreeNodeNativeData
	{
		::UnityEngine::Vector3 localPosition; // 0x10
		::System::Single size; // 0x1C
		::System::UInt32 depth; // 0x20
		::System::Boolean valid; // 0x24
		::System::Boolean leaf; // 0x25
		::System::Byte _padding0[0x2];
		::System::Int32 parent; // 0x28
		::RPGTools::Octree::Generation::OctreeNodeNativeChildren children; // 0x2C
		::System::Void _ctor(::RPGTools::Octree::Generation::OctreeNodeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Octree::Generation::OctreeNodeData*))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVEDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void DCDDKNNINEB(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVEDATA_DCDDKNNINEB_OFFSET))(this, a1);
		}

		::System::Void BIKABOFADBP(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVEDATA_BIKABOFADBP_OFFSET))(this, a1);
		}

	};
}
