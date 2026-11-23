#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F11CCBADA8BD3502/B4C07B15EEE5E7A7.h"
#include "unitysdk/F11CCBADA8BD3502/B756020CA6B7E304.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_SCENEMANAGEMENT_LOADSCENEPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x416E550)

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int LoadSceneParameters_TypeDefinitionIndex = 17573;

	struct alignas(4) LoadSceneParameters
	{
		::F11CCBADA8BD3502::B756020CA6B7E304 m_LoadSceneMode; // 0x10
		::F11CCBADA8BD3502::B4C07B15EEE5E7A7 m_LocalPhysicsMode; // 0x14

		::System::Void _ctor(::F11CCBADA8BD3502::B756020CA6B7E304 A84D57260767D5BD)
		{
			return ((::System::Void(*)(::PVOID, ::F11CCBADA8BD3502::B756020CA6B7E304))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_LOADSCENEPARAMETERS__CTOR_OFFSET))(this, A84D57260767D5BD);
		}
	};
}
