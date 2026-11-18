#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIADAPT_UIADAPTDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B455240)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_UIAdaptDataDic_TypeDefinitionIndex = 70674;

	class ConfigUIAdapt_UIAdaptDataDic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_UIADAPTDATADIC__CTOR_OFFSET))(this);
		}
	};
}
