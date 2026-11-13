#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define NOPHIDPGBBI_ADDDGLGMBHE_OFFSET UNITYSDK_OFFSET(0x3E4DF10)
#define NOPHIDPGBBI_DPBEEJGFJLN_OFFSET UNITYSDK_OFFSET(0x3E4DF80)
#define NOPHIDPGBBI_EPKBEFCKKDJ_OFFSET UNITYSDK_OFFSET(0x3E4DFF0)
#define NOPHIDPGBBI_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x3E4DEA0)

inline static constexpr unsigned int NOPHIDPGBBI_TypeDefinitionIndex = 74210;

	struct alignas(4) NOPHIDPGBBI
	{
		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPHIDPGBBI_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* ADDDGLGMBHE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPHIDPGBBI_ADDDGLGMBHE_OFFSET))(this);
		}

		::System::String* DPBEEJGFJLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPHIDPGBBI_DPBEEJGFJLN_OFFSET))(this);
		}

		::System::String* EPKBEFCKKDJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPHIDPGBBI_EPKBEFCKKDJ_OFFSET))(this);
		}

	};
