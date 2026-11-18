#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFJKNJLFINI.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDHANDLEFOLLOWERGUIDESTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465D630)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHANDLEFOLLOWERGUIDESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1465D790)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHandleFollowerGuideState_TypeDefinitionIndex = 87452;

	class LDHandleFollowerGuideState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHANDLEFOLLOWERGUIDESTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::NFJKNJLFINI state)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFJKNJLFINI))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHANDLEFOLLOWERGUIDESTATE_INVOKE_OFFSET))(this, state);
		}
	};
}
