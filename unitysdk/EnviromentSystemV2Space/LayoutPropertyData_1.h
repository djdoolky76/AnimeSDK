#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/LayoutPropertyDataBase.h"

namespace EnviromentSystemV2Space
{
	template <typename T>
	class LayoutPropertyData_1 : public ::EnviromentSystemV2Space::LayoutPropertyDataBase
	{
	public:
		T v; // 0x0
	};
}
