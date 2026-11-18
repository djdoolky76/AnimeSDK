#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISINLASTLAYER_INVOKE_OFFSET UNITYSDK_OFFSET(0x11912820)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISINLASTLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x11912950)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_IsInLastLayer_TypeDefinitionIndex = 69974;

	class LD_AbyssS2_IsInLastLayer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISINLASTLAYER__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISINLASTLAYER_INVOKE_OFFSET))(this);
		}
	};
}
