#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"
namespace UnityEngine::AI { class NavMeshPath; }

#define UNITYENGINE_AI_NAVMESHPATHASYNCOPERATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3AAFC0)

namespace UnityEngine::AI
{
	class NavMeshPathAsyncOperation : public ::UnityEngine::AsyncOperation
	{
	public:
		::UnityEngine::AI::NavMeshPath* m_Path; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATHASYNCOPERATION_CTOR_OFFSET))(this);
		}

	};
}
