#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeManager_AreaData.h"
class NGLFOJKOKBH;
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPGTools::Octree::Generation { class OctreeAreaData; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xE8A6890)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE_OOJABELIMCE_OFFSET UNITYSDK_OFFSET(0xE8A5F40)

namespace RPGTools::Octree::Generation
{
	class OctreeManager_AreaData_Curve : public ::RPGTools::Octree::Generation::OctreeManager_AreaData
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* Curve; // 0x18
		::System::Int32 DesiredSearchCount; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE_CTOR_OFFSET))(this);
		}

		::RPGTools::Octree::Generation::OctreeAreaData* OOJABELIMCE(::NGLFOJKOKBH* a1)
		{
			return ((::RPGTools::Octree::Generation::OctreeAreaData*(*)(::PVOID, ::NGLFOJKOKBH*))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE_OOJABELIMCE_OFFSET))(this, a1);
		}

	};
}
