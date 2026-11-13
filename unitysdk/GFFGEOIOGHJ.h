#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define GFFGEOIOGHJ_ADDDGLGMBHE_OFFSET UNITYSDK_OFFSET(0x3E73870)
#define GFFGEOIOGHJ_DPBEEJGFJLN_OFFSET UNITYSDK_OFFSET(0x3E738E0)
#define GFFGEOIOGHJ_EPKBEFCKKDJ_OFFSET UNITYSDK_OFFSET(0x3E73950)
#define GFFGEOIOGHJ_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x3E73800)

inline static constexpr unsigned int GFFGEOIOGHJ_TypeDefinitionIndex = 74214;

	struct alignas(4) GFFGEOIOGHJ
	{
		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFGEOIOGHJ_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* ADDDGLGMBHE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFGEOIOGHJ_ADDDGLGMBHE_OFFSET))(this);
		}

		::System::String* DPBEEJGFJLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFGEOIOGHJ_DPBEEJGFJLN_OFFSET))(this);
		}

		::System::String* EPKBEFCKKDJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFGEOIOGHJ_EPKBEFCKKDJ_OFFSET))(this);
		}

	};
