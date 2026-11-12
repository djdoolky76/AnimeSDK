#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define BGJCBCCLIKF_ADDDGLGMBHE_OFFSET UNITYSDK_OFFSET(0x16B80)
#define BGJCBCCLIKF_DPBEEJGFJLN_OFFSET UNITYSDK_OFFSET(0x16BF0)
#define BGJCBCCLIKF_EPKBEFCKKDJ_OFFSET UNITYSDK_OFFSET(0x16C60)
#define BGJCBCCLIKF_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x16B10)

inline static constexpr unsigned int BGJCBCCLIKF_TypeDefinitionIndex = 74214;

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
