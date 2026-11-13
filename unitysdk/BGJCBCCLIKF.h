#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define BGJCBCCLIKF_ADDDGLGMBHE_OFFSET UNITYSDK_OFFSET(0x3DB7890)
#define BGJCBCCLIKF_DPBEEJGFJLN_OFFSET UNITYSDK_OFFSET(0x3DB7900)
#define BGJCBCCLIKF_EPKBEFCKKDJ_OFFSET UNITYSDK_OFFSET(0x3DB7970)
#define BGJCBCCLIKF_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x3DB7820)

inline static constexpr unsigned int BGJCBCCLIKF_TypeDefinitionIndex = 74213;

	struct alignas(4) BGJCBCCLIKF
	{
		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCBCCLIKF_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* ADDDGLGMBHE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCBCCLIKF_ADDDGLGMBHE_OFFSET))(this);
		}

		::System::String* DPBEEJGFJLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCBCCLIKF_DPBEEJGFJLN_OFFSET))(this);
		}

		::System::String* EPKBEFCKKDJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCBCCLIKF_EPKBEFCKKDJ_OFFSET))(this);
		}

	};
