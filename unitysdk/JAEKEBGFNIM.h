#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define JAEKEBGFNIM_ADDDGLGMBHE_OFFSET UNITYSDK_OFFSET(0x128A0)
#define JAEKEBGFNIM_DPBEEJGFJLN_OFFSET UNITYSDK_OFFSET(0x12910)
#define JAEKEBGFNIM_EPKBEFCKKDJ_OFFSET UNITYSDK_OFFSET(0x12980)
#define JAEKEBGFNIM_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x12850)

inline static constexpr unsigned int JAEKEBGFNIM_TypeDefinitionIndex = 74218;

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
