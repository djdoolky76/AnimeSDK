#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIADAPT_DEFAULTUIADAPTDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x103E3D10)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DefaultUIAdaptDataDicEntry_TypeDefinitionIndex = 70683;

	class ConfigUIAdapt_DefaultUIAdaptDataDicEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEFAULTUIADAPTDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
