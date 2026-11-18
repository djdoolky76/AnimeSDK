#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras { class BangbooAdjustmentCameraConfig; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERBANGBOOADJUSTMENTCAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x180D8790)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERBANGBOOADJUSTMENTCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x180D8960)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnterBangbooAdjustmentCamera_TypeDefinitionIndex = 88698;

	class LDEnterBangbooAdjustmentCamera
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERBANGBOOADJUSTMENTCAMERA__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Cameras::BangbooAdjustmentCameraConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERBANGBOOADJUSTMENTCAMERA_INVOKE_OFFSET))(this, config);
		}
	};
}
