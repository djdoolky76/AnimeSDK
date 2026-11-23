#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace PampelGames::RoadConstructor { class SpawnObject; }

#define PAMPELGAMES_ROADCONSTRUCTOR_SPAWNEDOBJECT_A788EA8D7C189191_OFFSET UNITYSDK_OFFSET(0x3D77850)
#define PAMPELGAMES_ROADCONSTRUCTOR_SPAWNEDOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int SpawnedObject_TypeDefinitionIndex = 18812;

	class SpawnedObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::PampelGames::RoadConstructor::SpawnObject* spawnObject; // 0x20
		::System::Boolean otherSide; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SPAWNEDOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void A788EA8D7C189191(::PampelGames::RoadConstructor::SpawnObject* BA4225D466D2758A)
		{
			return ((::System::Void(*)(::PVOID, ::PampelGames::RoadConstructor::SpawnObject*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SPAWNEDOBJECT_A788EA8D7C189191_OFFSET))(this, BA4225D466D2758A);
		}
	};
}
