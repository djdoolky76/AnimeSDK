#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoTerrainSubZone3D.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_MONOTERRAINCYLINDERZONE3D_MDAEOKBFACK_OFFSET UNITYSDK_OFFSET(0x10D43100)
#define MOLEMOLE_MONOTERRAINCYLINDERZONE3D__CTOR_OFFSET UNITYSDK_OFFSET(0x10D43190)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainCylinderZone3D_TypeDefinitionIndex = 86540;

	class MonoTerrainCylinderZone3D : public ::MoleMole::MonoTerrainSubZone3D
	{
	public:
		::System::Single Radius; // 0x30
		::System::Single Height; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINCYLINDERZONE3D__CTOR_OFFSET))(this);
		}

		::System::Boolean MDAEOKBFACK(::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINCYLINDERZONE3D_MDAEOKBFACK_OFFSET))(this, CKPGOKHECCH);
		}
	};
}
