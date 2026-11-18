#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITBANGBOOADJUSTMENTCAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D0DD40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITBANGBOOADJUSTMENTCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0DEA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDExitBangbooAdjustmentCamera_TypeDefinitionIndex = 69952;

	class LDExitBangbooAdjustmentCamera
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITBANGBOOADJUSTMENTCAMERA__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITBANGBOOADJUSTMENTCAMERA_INVOKE_OFFSET))(this);
		}
	};
}
