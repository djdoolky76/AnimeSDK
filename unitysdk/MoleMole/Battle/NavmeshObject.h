#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSourceShape.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_BATTLE_NAVMESHOBJECT_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0xFFB4700)
#define MOLEMOLE_BATTLE_NAVMESHOBJECT_LNANFBEOABF_OFFSET UNITYSDK_OFFSET(0xFFB4760)
#define MOLEMOLE_BATTLE_NAVMESHOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xFFB4710)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int NavmeshObject_TypeDefinitionIndex = 84409;

	class NavmeshObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AI::NavMeshBuildSourceShape _MDHFIELPBKE_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_NAVMESHOBJECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::AI::NavMeshBuildSourceShape get_shape()
		{
			return ((::UnityEngine::AI::NavMeshBuildSourceShape(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_NAVMESHOBJECT_GET_SHAPE_OFFSET))(this);
		}

		::System::Void LNANFBEOABF(::UnityEngine::AI::NavMeshBuildSourceShape EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshBuildSourceShape))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_NAVMESHOBJECT_LNANFBEOABF_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
