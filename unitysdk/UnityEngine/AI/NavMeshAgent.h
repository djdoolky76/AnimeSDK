#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

#define UNITYENGINE_AI_NAVMESHAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x40E9D70)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshAgent_TypeDefinitionIndex = 21264;

	class NavMeshAgent : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHAGENT__CTOR_OFFSET))(this);
		}
	};
}
