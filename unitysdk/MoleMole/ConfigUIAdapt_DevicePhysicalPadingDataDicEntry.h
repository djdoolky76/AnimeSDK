#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIADAPT_DEVICEPHYSICALPADINGDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x190C4890)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DevicePhysicalPadingDataDicEntry_TypeDefinitionIndex = 70675;

	class ConfigUIAdapt_DevicePhysicalPadingDataDicEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEVICEPHYSICALPADINGDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
