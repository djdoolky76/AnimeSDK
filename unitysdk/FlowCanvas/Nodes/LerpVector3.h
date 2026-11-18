#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_LERPVECTOR3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF4E4B0)
#define FLOWCANVAS_NODES_LERPVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF4E5A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LerpVector3_TypeDefinitionIndex = 29522;

	class LerpVector3
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LERPVECTOR3__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Invoke(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::System::Single t, ::ParadoxNotion::Animation::EaseType interpolation)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::ParadoxNotion::Animation::EaseType))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LERPVECTOR3_INVOKE_OFFSET))(this, a, b, t, interpolation);
		}
	};
}
