#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIADAPT_DEVICEADAPTDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C703180)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DeviceAdaptDataDicEntry_TypeDefinitionIndex = 70685;

	class ConfigUIAdapt_DeviceAdaptDataDicEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEVICEADAPTDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
