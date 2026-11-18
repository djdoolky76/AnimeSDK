#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIADAPT_DEVICEPHYSICALDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x103E3D30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DevicePhysicalDataDic_TypeDefinitionIndex = 70677;

	class ConfigUIAdapt_DevicePhysicalDataDic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEVICEPHYSICALDATADIC__CTOR_OFFSET))(this);
		}
	};
}
