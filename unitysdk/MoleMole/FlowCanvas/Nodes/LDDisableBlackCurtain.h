#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDDISABLEBLACKCURTAIN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8E89C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDISABLEBLACKCURTAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E8B00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDDisableBlackCurtain_TypeDefinitionIndex = 47203;

	class LDDisableBlackCurtain
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDISABLEBLACKCURTAIN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Single duration, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDISABLEBLACKCURTAIN_INVOKE_OFFSET))(this, duration, curve);
		}
	};
}
