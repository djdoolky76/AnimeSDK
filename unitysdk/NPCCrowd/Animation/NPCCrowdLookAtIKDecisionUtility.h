#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDECISIONUTILITY_ENTITYTYPEENABLED_OFFSET UNITYSDK_OFFSET(0xED73430)
#define NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDECISIONUTILITY_SPATIALENABLED_OFFSET UNITYSDK_OFFSET(0xED734E0)
#define NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDECISIONUTILITY_WITHINSECTOR_OFFSET UNITYSDK_OFFSET(0xED739B0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdLookAtIKDecisionUtility_TypeDefinitionIndex = 58196;

	class NPCCrowdLookAtIKDecisionUtility : public ::System::Object
	{
	public:
		static ::System::Boolean EntityTypeEnabled(::System::Boolean checkDefault, ::System::Boolean checkFixCrowd, ::System::Boolean checkPathCrowd, ::System::Boolean checkConfigTag, ::System::Boolean defaultEnabled, ::System::Boolean isPathCrowd, ::System::Boolean configTagMatched)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDECISIONUTILITY_ENTITYTYPEENABLED_OFFSET))(checkDefault, checkFixCrowd, checkPathCrowd, checkConfigTag, defaultEnabled, isPathCrowd, configTagMatched);
		}

		static ::System::Boolean SpatialEnabled(::UnityEngine::Vector3 npcPosition, ::UnityEngine::Quaternion npcRotation, ::UnityEngine::Vector3 targetPosition, ::UnityEngine::Vector3 targetForward, ::System::Single rangeSquared, ::System::Single targetHalfAngleCos, ::System::Single npcHalfAngleCos)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDECISIONUTILITY_SPATIALENABLED_OFFSET))(npcPosition, npcRotation, targetPosition, targetForward, rangeSquared, targetHalfAngleCos, npcHalfAngleCos);
		}

		static ::System::Boolean WithinSector(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 forward, ::System::Single halfAngleCos)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDECISIONUTILITY_WITHINSECTOR_OFFSET))(direction, forward, halfAngleCos);
		}
	};
}
