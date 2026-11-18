#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIADAPT_DEVICEPHYSICALPADINGDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C1870)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DevicePhysicalPadingDataDic_TypeDefinitionIndex = 70678;

	class ConfigUIAdapt_DevicePhysicalPadingDataDic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEVICEPHYSICALPADINGDATADIC__CTOR_OFFSET))(this);
		}
	};
}
