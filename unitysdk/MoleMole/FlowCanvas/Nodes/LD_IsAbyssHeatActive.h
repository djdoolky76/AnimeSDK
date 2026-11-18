#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ISABYSSHEATACTIVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8F3C20)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ISABYSSHEATACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F3E50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_IsAbyssHeatActive_TypeDefinitionIndex = 39759;

	class LD_IsAbyssHeatActive
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ISABYSSHEATACTIVE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Int32 heatID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ISABYSSHEATACTIVE_INVOKE_OFFSET))(this, heatID);
		}
	};
}
