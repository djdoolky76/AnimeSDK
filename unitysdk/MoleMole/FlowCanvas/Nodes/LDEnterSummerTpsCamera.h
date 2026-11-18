#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERSUMMERTPSCAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465C790)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERSUMMERTPSCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1465C930)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnterSummerTpsCamera_TypeDefinitionIndex = 91222;

	class LDEnterSummerTpsCamera
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERSUMMERTPSCAMERA__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::String* configKey, ::System::String* overrideConfigKey, ::UnityEngine::Vector3 initAimTargetPos, ::MoleMole::Cameras::CameraTrackBlending* overrideBlendIn, ::MoleMole::Cameras::CameraTrackBlending* overrideBlendOut)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::MoleMole::Cameras::CameraTrackBlending*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERSUMMERTPSCAMERA_INVOKE_OFFSET))(this, configKey, overrideConfigKey, initAimTargetPos, overrideBlendIn, overrideBlendOut);
		}
	};
}
