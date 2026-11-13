#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define OPLBFGAMDLB_ADDDGLGMBHE_OFFSET UNITYSDK_OFFSET(0x3E08D90)
#define OPLBFGAMDLB_DPBEEJGFJLN_OFFSET UNITYSDK_OFFSET(0x3E08E00)
#define OPLBFGAMDLB_EPKBEFCKKDJ_OFFSET UNITYSDK_OFFSET(0x3E08E50)
#define OPLBFGAMDLB_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x3E08D40)

inline static constexpr unsigned int OPLBFGAMDLB_TypeDefinitionIndex = 74218;

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
