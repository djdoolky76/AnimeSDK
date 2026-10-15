#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPGTOOLS_OCTREE_GENERATION_OCTREEAREADATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8A55A0)

namespace RPGTools::Octree::Generation
{
	class OctreeAreaData : public ::System::Object
	{
	public:
		::System::Single weight; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Vector3>* localPositions; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEAREADATA_CTOR_OFFSET))(this);
		}

	};
}
