#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define NBNEGKJDEIL_ADDDGLGMBHE_OFFSET UNITYSDK_OFFSET(0x23C90)
#define NBNEGKJDEIL_DPBEEJGFJLN_OFFSET UNITYSDK_OFFSET(0x23D00)
#define NBNEGKJDEIL_EPKBEFCKKDJ_OFFSET UNITYSDK_OFFSET(0x23D50)
#define NBNEGKJDEIL_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x23C20)

inline static constexpr unsigned int NBNEGKJDEIL_TypeDefinitionIndex = 74216;

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
