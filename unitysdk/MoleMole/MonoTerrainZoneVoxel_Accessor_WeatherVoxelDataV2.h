#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_WEATHERVOXELDATAV2_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x60E920)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_WEATHERVOXELDATAV2__CTOR_OFFSET UNITYSDK_OFFSET(0x7C5B20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainZoneVoxel_Accessor_WeatherVoxelDataV2_TypeDefinitionIndex = 75242;

	struct alignas(8) MonoTerrainZoneVoxel_Accessor_WeatherVoxelDataV2
	{
		::System::String* weatherKeyV2; // 0x10
		::System::String* weatherPrefabPath; // 0x18
		::UnityEngine::GameObject* weatherObject; // 0x20

		::System::Void _ctor(::System::String* CJBJONJDOLI, ::System::String* MCOHLHMKLIP)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_WEATHERVOXELDATAV2__CTOR_OFFSET))(this, CJBJONJDOLI, MCOHLHMKLIP);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_WEATHERVOXELDATAV2_GET_ISVALID_OFFSET))(this);
		}
	};
}
