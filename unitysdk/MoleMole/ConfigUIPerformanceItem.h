#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIPERFORMANCEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x190C60C0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIPerformanceItem_TypeDefinitionIndex = 76582;

	class ConfigUIPerformanceItem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIPERFORMANCEITEM__CTOR_OFFSET))(this);
		}
	};
}
