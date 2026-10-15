#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"
#include "unitysdk/UnityEngine/SceneManagement/LocalPhysicsMode.h"

#define UNITYENGINE_SCENEMANAGEMENT_LOADSCENEPARAMETERS_CTOR_OFFSET UNITYSDK_OFFSET(0x3C7B8C0)

namespace UnityEngine::SceneManagement
{
	struct alignas(4) LoadSceneParameters
	{
		::UnityEngine::SceneManagement::LoadSceneMode m_LoadSceneMode; // 0x10
		::UnityEngine::SceneManagement::LocalPhysicsMode m_LocalPhysicsMode; // 0x14
		::System::Void _ctor(::UnityEngine::SceneManagement::LoadSceneMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_LOADSCENEPARAMETERS_CTOR_OFFSET))(this, a1);
		}

	};
}
