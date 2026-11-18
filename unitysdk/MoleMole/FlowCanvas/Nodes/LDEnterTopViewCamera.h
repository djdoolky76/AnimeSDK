#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras { class TopViewCameraConfig; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERTOPVIEWCAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B34990)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERTOPVIEWCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x12B34A90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnterTopViewCamera_TypeDefinitionIndex = 45232;

	class LDEnterTopViewCamera
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERTOPVIEWCAMERA__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Cameras::TopViewCameraConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::TopViewCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERTOPVIEWCAMERA_INVOKE_OFFSET))(this, config);
		}
	};
}
