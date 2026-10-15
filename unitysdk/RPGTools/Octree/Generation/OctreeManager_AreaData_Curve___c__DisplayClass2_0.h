#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NGLFOJKOKBH;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE8A6880)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE___C__DISPLAYCLASS2_0__BUILDDATA_B__0_OFFSET UNITYSDK_OFFSET(0xE8A68A0)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeManager_AreaData_Curve___c__DisplayClass2_0_TypeDefinitionIndex = 48888;

	class OctreeManager_AreaData_Curve___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::NGLFOJKOKBH* tree; // 0x10
		::BansheeGz::BGSpline::Components::BGCcMath* math; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _BuildData_b__0(::FKDIDBGBGMF a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_AREADATA_CURVE___C__DISPLAYCLASS2_0__BUILDDATA_B__0_OFFSET))(this, a1);
		}

	};
}
