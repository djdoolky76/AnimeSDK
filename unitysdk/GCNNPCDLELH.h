#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterAdventureSomatoType.h"
#include "unitysdk/UnityEngine/AI/ObstacleAvoidanceType.h"

#define GCNNPCDLELH_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x2E7A180)

inline static constexpr unsigned int GCNNPCDLELH_TypeDefinitionIndex = 57119;

	struct alignas(4) GCNNPCDLELH
	{
		::System::Int32 FCLEEPHAKFH; // 0x10
		::System::Single IDKONBFPBLH; // 0x14
		::UnityEngine::AI::ObstacleAvoidanceType BGPLJEOOFPO; // 0x18
		::System::Int32 NEAHPHHILED; // 0x1C
		::RPG::GameCore::CharacterAdventureSomatoType JPHDDEFGPFF; // 0x20
		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNNPCDLELH_LDAMHBBILAD_OFFSET))(this);
		}

	};
