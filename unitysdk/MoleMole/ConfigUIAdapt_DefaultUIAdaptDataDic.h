#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIADAPT_DEFAULTUIADAPTDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x118F47C0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DefaultUIAdaptDataDic_TypeDefinitionIndex = 70679;

	class ConfigUIAdapt_DefaultUIAdaptDataDic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEFAULTUIADAPTDATADIC__CTOR_OFFSET))(this);
		}
	};
}
