#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define GFFGEOIOGHJ_ADDDGLGMBHE_OFFSET UNITYSDK_OFFSET(0x3050F40)
#define GFFGEOIOGHJ_DPBEEJGFJLN_OFFSET UNITYSDK_OFFSET(0x3050FB0)
#define GFFGEOIOGHJ_EPKBEFCKKDJ_OFFSET UNITYSDK_OFFSET(0x3051020)
#define GFFGEOIOGHJ_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x3050ED0)

inline static constexpr unsigned int GFFGEOIOGHJ_TypeDefinitionIndex = 74215;

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
