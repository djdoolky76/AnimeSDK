#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETSERVERROBOTID_INVOKE_OFFSET UNITYSDK_OFFSET(0x130CACF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETSERVERROBOTID__CTOR_OFFSET UNITYSDK_OFFSET(0x130CAD30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMechBooGetServerRobotID_TypeDefinitionIndex = 88702;

	class LDMechBooGetServerRobotID
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETSERVERROBOTID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETSERVERROBOTID_INVOKE_OFFSET))(this);
		}
	};
}
