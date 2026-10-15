#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeNodeNativeChildren.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeNodeNativeData.h"
class NGLFOJKOKBH;

#define KIELGKDDPII_CTOR_OFFSET UNITYSDK_OFFSET(0x14A50)

inline static constexpr unsigned int KIELGKDDPII_TypeDefinitionIndex = 48891;

	struct alignas(4) KIELGKDDPII
	{
		::UnityEngine::Vector3 AIBGEDIGEOO; // 0x10
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x1C
		::System::Single OGPDIJFMIHM; // 0x28
		::System::UInt32 OOBIKMCPICN; // 0x2C
		::System::Boolean NLDLLPECLCH; // 0x30
		::System::Boolean FJDINLJFEMO; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 ABBCOPGHHPD; // 0x34
		::RPGTools::Octree::Generation::OctreeNodeNativeChildren EGGCADJJJOD; // 0x38
		::System::Void _ctor(::NGLFOJKOKBH* a1, ::RPGTools::Octree::Generation::OctreeNodeNativeData a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGLFOJKOKBH*, ::RPGTools::Octree::Generation::OctreeNodeNativeData))((::PBYTE)hIl2Cpp + KIELGKDDPII_CTOR_OFFSET))(this, a1, a2);
		}

	};
