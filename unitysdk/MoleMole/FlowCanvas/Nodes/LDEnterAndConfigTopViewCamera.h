#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras { class TopViewCameraConfig; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERANDCONFIGTOPVIEWCAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D0D860)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERANDCONFIGTOPVIEWCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0DD20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnterAndConfigTopViewCamera_TypeDefinitionIndex = 39341;

	class LDEnterAndConfigTopViewCamera
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERANDCONFIGTOPVIEWCAMERA__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Cameras::TopViewCameraConfig* config, ::System::String* anchor)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::TopViewCameraConfig*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERANDCONFIGTOPVIEWCAMERA_INVOKE_OFFSET))(this, config, anchor);
		}
	};
}
