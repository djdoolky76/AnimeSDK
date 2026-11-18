#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace MoleMole { class MonoTerrainZoneVoxel; }
namespace MoleMole::Voxel { class VoxelArray; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_BKJIIIKLPDM_OFFSET UNITYSDK_OFFSET(0x15ABB580)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_IMCKCDKGAGO_OFFSET UNITYSDK_OFFSET(0x15ABB7F0)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15ABB610)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15ABB410)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15ABB7A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDynamicObjectVoxel_TypeDefinitionIndex = 78974;

	class MonoDynamicObjectVoxel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::Config::WeatherType bakedWeatherType; // 0x18
		::System::Byte _padding0[0x4];
		::MoleMole::Voxel::VoxelArray* weatherVoxelArray; // 0x20
		::UnityEngine::Vector3Int voxelMeta; // 0x28
		::UnityEngine::Vector3 voxelMin; // 0x34
		::UnityEngine::Vector3 voxelMax; // 0x40
		::UnityEngine::Vector2 voxelPrecision; // 0x4C
		::System::Byte _padding1[0x4];
		::UnityEngine::Coroutine* EBEOCGEJIEE; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_ONDISABLE_OFFSET))(this);
		}

		::System::Void IMCKCDKGAGO(::MoleMole::MonoTerrainZoneVoxel* JEFOHGLJGMI)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTerrainZoneVoxel*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_IMCKCDKGAGO_OFFSET))(this, JEFOHGLJGMI);
		}

		::System::Collections::IEnumerator* BKJIIIKLPDM(::System::Action_1<::MoleMole::MonoTerrainZoneVoxel*>* EJGDHCIBCJH)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::MoleMole::MonoTerrainZoneVoxel*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_BKJIIIKLPDM_OFFSET))(this, EJGDHCIBCJH);
		}
	};
}
