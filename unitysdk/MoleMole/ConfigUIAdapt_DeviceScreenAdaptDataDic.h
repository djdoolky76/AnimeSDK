#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIADAPT_DEVICESCREENADAPTDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B949800)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DeviceScreenAdaptDataDic_TypeDefinitionIndex = 70680;

	class ConfigUIAdapt_DeviceScreenAdaptDataDic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEVICESCREENADAPTDATADIC__CTOR_OFFSET))(this);
		}
	};
}
