#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIADAPT_DEVICEADAPTDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x180CA730)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DeviceAdaptDataDic_TypeDefinitionIndex = 70676;

	class ConfigUIAdapt_DeviceAdaptDataDic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEVICEADAPTDATADIC__CTOR_OFFSET))(this);
		}
	};
}
