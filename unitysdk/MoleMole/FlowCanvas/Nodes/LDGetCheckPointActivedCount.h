#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETCHECKPOINTACTIVEDCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x180D8CA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETCHECKPOINTACTIVEDCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x180D8E60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetCheckPointActivedCount_TypeDefinitionIndex = 62219;

	class LDGetCheckPointActivedCount
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETCHECKPOINTACTIVEDCOUNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETCHECKPOINTACTIVEDCOUNT_INVOKE_OFFSET))(this);
		}
	};
}
