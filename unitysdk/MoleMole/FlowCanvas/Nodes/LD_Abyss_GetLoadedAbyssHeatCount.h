#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSS_GETLOADEDABYSSHEATCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1245D0E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSS_GETLOADEDABYSSHEATCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1245D2A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_Abyss_GetLoadedAbyssHeatCount_TypeDefinitionIndex = 76112;

	class LD_Abyss_GetLoadedAbyssHeatCount
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSS_GETLOADEDABYSSHEATCOUNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSS_GETLOADEDABYSSHEATCOUNT_INVOKE_OFFSET))(this);
		}
	};
}
