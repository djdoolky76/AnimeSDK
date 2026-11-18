#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras { class SideScrollingCameraRuntimeParam; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x130C6F30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x130C7050)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnterSideScrollingCameraMode_TypeDefinitionIndex = 89593;

	class LDEnterSideScrollingCameraMode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Cameras::SideScrollingCameraRuntimeParam* param)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::SideScrollingCameraRuntimeParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODE_INVOKE_OFFSET))(this, param);
		}
	};
}
