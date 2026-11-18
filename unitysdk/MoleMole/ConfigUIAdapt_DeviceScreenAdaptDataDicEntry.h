#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIADAPT_DEVICESCREENADAPTDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD14EE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DeviceScreenAdaptDataDicEntry_TypeDefinitionIndex = 70681;

	class ConfigUIAdapt_DeviceScreenAdaptDataDicEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEVICESCREENADAPTDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
