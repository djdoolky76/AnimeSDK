#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASUREWEATHER_INVOKE_OFFSET UNITYSDK_OFFSET(0x14667D60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASUREWEATHER__CTOR_OFFSET UNITYSDK_OFFSET(0x14667EA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetSummerTideTreasureWeather_TypeDefinitionIndex = 70011;

	class LD_GetSummerTideTreasureWeather
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASUREWEATHER__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::WeatherType Invoke()
		{
			return ((::MoleMole::Config::WeatherType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETSUMMERTIDETREASUREWEATHER_INVOKE_OFFSET))(this);
		}
	};
}
