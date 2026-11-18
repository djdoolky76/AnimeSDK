#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURNODECOORDFLOOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1623FED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURNODECOORDFLOOR__CTOR_OFFSET UNITYSDK_OFFSET(0x162400F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetCurNodeCoordFloor_TypeDefinitionIndex = 92314;

	class LD_AbyssS2_GetCurNodeCoordFloor
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURNODECOORDFLOOR__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Boolean startFromZero)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURNODECOORDFLOOR_INVOKE_OFFSET))(this, startFromZero);
		}
	};
}
