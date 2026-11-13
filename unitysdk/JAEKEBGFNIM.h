#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define JAEKEBGFNIM_ADDDGLGMBHE_OFFSET UNITYSDK_OFFSET(0x3E36720)
#define JAEKEBGFNIM_DPBEEJGFJLN_OFFSET UNITYSDK_OFFSET(0x3E36790)
#define JAEKEBGFNIM_EPKBEFCKKDJ_OFFSET UNITYSDK_OFFSET(0x3E36800)
#define JAEKEBGFNIM_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x3E366D0)

inline static constexpr unsigned int JAEKEBGFNIM_TypeDefinitionIndex = 74217;

	struct alignas(4) JAEKEBGFNIM
	{
		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEKEBGFNIM_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* ADDDGLGMBHE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEKEBGFNIM_ADDDGLGMBHE_OFFSET))(this);
		}

		::System::String* DPBEEJGFJLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEKEBGFNIM_DPBEEJGFJLN_OFFSET))(this);
		}

		::System::String* EPKBEFCKKDJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEKEBGFNIM_EPKBEFCKKDJ_OFFSET))(this);
		}

	};
