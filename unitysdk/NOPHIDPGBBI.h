#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define NOPHIDPGBBI_ADDDGLGMBHE_OFFSET UNITYSDK_OFFSET(0x277B0)
#define NOPHIDPGBBI_DPBEEJGFJLN_OFFSET UNITYSDK_OFFSET(0x27820)
#define NOPHIDPGBBI_EPKBEFCKKDJ_OFFSET UNITYSDK_OFFSET(0x27890)
#define NOPHIDPGBBI_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x27740)

inline static constexpr unsigned int NOPHIDPGBBI_TypeDefinitionIndex = 74211;

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
