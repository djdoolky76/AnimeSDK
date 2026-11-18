#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_MONOTERRAINZONE3D_GETTERRAINMATTYPE_OFFSET UNITYSDK_OFFSET(0x15AC4B20)
#define MOLEMOLE_MONOTERRAINZONE3D__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC4B80)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainZone3D_TypeDefinitionIndex = 55559;

	class MonoTerrainZone3D
	{
	public:
		::MoleMole::Config::TerrainMatType DefaultTerrainMat; // 0x20
		::System::Boolean isWorking; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONE3D__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::TerrainMatType GetTerrainMatType(::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::MoleMole::Config::TerrainMatType(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONE3D_GETTERRAINMATTYPE_OFFSET))(this, CKPGOKHECCH);
		}
	};
}
