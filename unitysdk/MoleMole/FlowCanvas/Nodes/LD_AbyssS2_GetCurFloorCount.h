#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURFLOORCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B3DE70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURFLOORCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3DFA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetCurFloorCount_TypeDefinitionIndex = 67831;

	class LD_AbyssS2_GetCurFloorCount
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURFLOORCOUNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURFLOORCOUNT_INVOKE_OFFSET))(this);
		}
	};
}
