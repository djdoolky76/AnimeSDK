#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_ROOMLIMITTIME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7BE0C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_ROOMLIMITTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BE250)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHadal_RoomLimitTime_TypeDefinitionIndex = 45584;

	class LDHadal_RoomLimitTime
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_ROOMLIMITTIME__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_ROOMLIMITTIME_INVOKE_OFFSET))(this);
		}
	};
}
