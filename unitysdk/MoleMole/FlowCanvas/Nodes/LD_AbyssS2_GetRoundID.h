#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETROUNDID_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE4810)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETROUNDID__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE4970)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetRoundID_TypeDefinitionIndex = 59571;

	class LD_AbyssS2_GetRoundID
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETROUNDID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETROUNDID_INVOKE_OFFSET))(this);
		}
	};
}
