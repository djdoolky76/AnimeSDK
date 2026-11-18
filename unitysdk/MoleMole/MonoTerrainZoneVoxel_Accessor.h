#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/MoleMole/MonoTerrainZoneVoxel_Accessor_WeatherVoxelData.h"
#include "unitysdk/MoleMole/MonoTerrainZoneVoxel_Accessor_WeatherVoxelDataV2.h"

namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_CAGCDKNOBMO_OFFSET UNITYSDK_OFFSET(0x162EA4D0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_DNOJBPELHKC_OFFSET UNITYSDK_OFFSET(0x162E9860)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_GETDATABYWEATHERV2KEY_OFFSET UNITYSDK_OFFSET(0x162E9000)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_GETDATABYWEATHER_OFFSET UNITYSDK_OFFSET(0x162E8F40)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_IBMAJELKAOL_OFFSET UNITYSDK_OFFSET(0x162EA1F0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_IPBCIPBIOLF_OFFSET UNITYSDK_OFFSET(0x162EA130)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_KJJHNDPDGOH_OFFSET UNITYSDK_OFFSET(0x162E9810)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_KKLLDKGDKCH_OFFSET UNITYSDK_OFFSET(0x162E9CE0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_MPEPPAAPNJN_OFFSET UNITYSDK_OFFSET(0x162E9440)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x162E9630)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_PGOEDJAEBOH_OFFSET UNITYSDK_OFFSET(0x162E92B0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_START_OFFSET UNITYSDK_OFFSET(0x162E9120)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x162E97B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainZoneVoxel_Accessor_TypeDefinitionIndex = 75240;

	class MonoTerrainZoneVoxel_Accessor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::Object*>* SceneWeatherVoxelData; // 0x18
		::Il2CppArray<::System::Object*>* SceneWeatherVoxelDataV2; // 0x20
		::MoleMole::Config::WeatherType _currentTerrainWeatherType; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* LIMAEOGIPAG; // 0x30
		::System::Boolean EFDCCIMBHLJ; // 0x38
		::System::Byte _padding1[0x7];
		::System::String* KJPADLMILIA; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoTerrainZoneVoxel_Accessor_WeatherVoxelData GetDataByWeather(::MoleMole::Config::WeatherType GJDCNHONJOH)
		{
			return ((::MoleMole::MonoTerrainZoneVoxel_Accessor_WeatherVoxelData(*)(::PVOID, ::MoleMole::Config::WeatherType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_GETDATABYWEATHER_OFFSET))(this, GJDCNHONJOH);
		}

		::MoleMole::MonoTerrainZoneVoxel_Accessor_WeatherVoxelDataV2 GetDataByWeatherV2Key(::System::String* MCOHLHMKLIP)
		{
			return ((::MoleMole::MonoTerrainZoneVoxel_Accessor_WeatherVoxelDataV2(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_GETDATABYWEATHERV2KEY_OFFSET))(this, MCOHLHMKLIP);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_ONDESTROY_OFFSET))(this);
		}

		::System::Collections::IEnumerator* KJJHNDPDGOH()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_KJJHNDPDGOH_OFFSET))(this);
		}

		::System::Void DNOJBPELHKC(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_DNOJBPELHKC_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void MPEPPAAPNJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_MPEPPAAPNJN_OFFSET))(this);
		}

		::System::Void IBMAJELKAOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_IBMAJELKAOL_OFFSET))(this);
		}

		::System::Void PGOEDJAEBOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_PGOEDJAEBOH_OFFSET))(this);
		}

		::System::Void IPBCIPBIOLF(::System::String* ABOMFKBGCAJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_IPBCIPBIOLF_OFFSET))(this, ABOMFKBGCAJ);
		}

		::System::Boolean CAGCDKNOBMO(::System::String* MCOHLHMKLIP, ::System::String*& ABOMFKBGCAJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_CAGCDKNOBMO_OFFSET))(this, MCOHLHMKLIP, ABOMFKBGCAJ);
		}

		::System::Boolean KKLLDKGDKCH(::System::String*& ABOMFKBGCAJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_KKLLDKGDKCH_OFFSET))(this, ABOMFKBGCAJ);
		}
	};
}
