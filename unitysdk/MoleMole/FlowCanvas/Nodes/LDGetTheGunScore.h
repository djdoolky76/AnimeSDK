#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETTHEGUNSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B35A60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETTHEGUNSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B35BC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetTheGunScore_TypeDefinitionIndex = 73191;

	class LDGetTheGunScore
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETTHEGUNSCORE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETTHEGUNSCORE_INVOKE_OFFSET))(this);
		}
	};
}
