#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define OPLBFGAMDLB_ADDDGLGMBHE_OFFSET UNITYSDK_OFFSET(0x2BF10)
#define OPLBFGAMDLB_DPBEEJGFJLN_OFFSET UNITYSDK_OFFSET(0x2BF80)
#define OPLBFGAMDLB_EPKBEFCKKDJ_OFFSET UNITYSDK_OFFSET(0x2BFD0)
#define OPLBFGAMDLB_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x2BEC0)

inline static constexpr unsigned int OPLBFGAMDLB_TypeDefinitionIndex = 74219;

	struct alignas(4) OPLBFGAMDLB
	{
		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLBFGAMDLB_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* ADDDGLGMBHE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLBFGAMDLB_ADDDGLGMBHE_OFFSET))(this);
		}

		::System::String* DPBEEJGFJLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLBFGAMDLB_DPBEEJGFJLN_OFFSET))(this);
		}

		::System::String* EPKBEFCKKDJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLBFGAMDLB_EPKBEFCKKDJ_OFFSET))(this);
		}

	};
