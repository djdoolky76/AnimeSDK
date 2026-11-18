#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETROUTEMAPID_INVOKE_OFFSET UNITYSDK_OFFSET(0x139DFEE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETROUTEMAPID__CTOR_OFFSET UNITYSDK_OFFSET(0x139E0040)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetRouteMapID_TypeDefinitionIndex = 46269;

	class LD_AbyssS2_GetRouteMapID
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETROUTEMAPID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETROUTEMAPID_INVOKE_OFFSET))(this);
		}
	};
}
