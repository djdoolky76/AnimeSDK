#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGUIADAPT_UIADAPTDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B455280)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_UIAdaptDataDicEntry_TypeDefinitionIndex = 70684;

	class ConfigUIAdapt_UIAdaptDataDicEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_UIADAPTDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
