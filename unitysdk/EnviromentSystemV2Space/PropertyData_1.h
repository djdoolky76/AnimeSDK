#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyDataBase.h"

namespace EnviromentSystemV2Space
{
	template <typename T>
	class PropertyData_1 : public ::EnviromentSystemV2Space::PropertyDataBase
	{
	public:
		T v; // 0x0
	};
}
