#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define NBNEGKJDEIL_ADDDGLGMBHE_OFFSET UNITYSDK_OFFSET(0x3DB6A00)
#define NBNEGKJDEIL_DPBEEJGFJLN_OFFSET UNITYSDK_OFFSET(0x3DB6A70)
#define NBNEGKJDEIL_EPKBEFCKKDJ_OFFSET UNITYSDK_OFFSET(0x3DB6AC0)
#define NBNEGKJDEIL_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x3DB6990)

inline static constexpr unsigned int NBNEGKJDEIL_TypeDefinitionIndex = 74215;

	struct alignas(4) NBNEGKJDEIL
	{
		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEGKJDEIL_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* ADDDGLGMBHE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEGKJDEIL_ADDDGLGMBHE_OFFSET))(this);
		}

		::System::String* DPBEEJGFJLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEGKJDEIL_DPBEEJGFJLN_OFFSET))(this);
		}

		::System::String* EPKBEFCKKDJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEGKJDEIL_EPKBEFCKKDJ_OFFSET))(this);
		}

	};
