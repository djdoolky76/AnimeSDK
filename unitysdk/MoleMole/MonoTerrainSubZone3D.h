#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/MoleMole/MonoSubZone3D.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_MONOTERRAINSUBZONE3D_CONTAINS_OFFSET UNITYSDK_OFFSET(0x12B82500)
#define MOLEMOLE_MONOTERRAINSUBZONE3D_HHKHBBNDFIB_OFFSET UNITYSDK_OFFSET(0x12B82740)
#define MOLEMOLE_MONOTERRAINSUBZONE3D_NLLAKGCDDKB_OFFSET UNITYSDK_OFFSET(0x12B82590)
#define MOLEMOLE_MONOTERRAINSUBZONE3D__CTOR_OFFSET UNITYSDK_OFFSET(0x12B826E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainSubZone3D_TypeDefinitionIndex = 64429;

	class MonoTerrainSubZone3D : public ::MoleMole::MonoSubZone3D
	{
	public:
		::MoleMole::Config::TerrainMatType Mat; // 0x20
		::System::Boolean IsAllWeatherWork; // 0x24
		::System::Byte _padding0[0x3];
		::MoleMole::Config::WeatherType WorkWeather; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINSUBZONE3D__CTOR_OFFSET))(this);
		}

		::System::Boolean Contains(::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINSUBZONE3D_CONTAINS_OFFSET))(this, CKPGOKHECCH);
		}

		::System::Boolean NLLAKGCDDKB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINSUBZONE3D_NLLAKGCDDKB_OFFSET))(this);
		}

		::System::Boolean HHKHBBNDFIB(::UnityEngine::Vector3 MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINSUBZONE3D_HHKHBBNDFIB_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
