#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_COUNTUPVALUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x162401D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_COUNTUPVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x16240250)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CountUpValue_TypeDefinitionIndex = 52799;

	class LD_CountUpValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_COUNTUPVALUE__CTOR_OFFSET))(this);
		}

		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_COUNTUPVALUE_INVOKE_OFFSET))(this);
		}
	};
}
