#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASURETIMEPERIOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8F3AB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASURETIMEPERIOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F3B40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetSummerTideTreasureTimePeriod_TypeDefinitionIndex = 81671;

	class LD_GetSummerTideTreasureTimePeriod
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASURETIMEPERIOD__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::TimePeriodType Invoke()
		{
			return ((::MoleMole::Config::TimePeriodType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASURETIMEPERIOD_INVOKE_OFFSET))(this);
		}
	};
}
