#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIADAPT_DEVICEPHYSICALDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C1850)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DevicePhysicalDataDicEntry_TypeDefinitionIndex = 70682;

	class ConfigUIAdapt_DevicePhysicalDataDicEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEVICEPHYSICALDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
