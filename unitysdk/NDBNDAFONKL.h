#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define NDBNDAFONKL_ADDDGLGMBHE_OFFSET UNITYSDK_OFFSET(0x24840)
#define NDBNDAFONKL_DPBEEJGFJLN_OFFSET UNITYSDK_OFFSET(0x248B0)
#define NDBNDAFONKL_EPKBEFCKKDJ_OFFSET UNITYSDK_OFFSET(0x24900)
#define NDBNDAFONKL_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x247F0)

inline static constexpr unsigned int NDBNDAFONKL_TypeDefinitionIndex = 74213;

	struct alignas(4) NDBNDAFONKL
	{
		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDBNDAFONKL_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* ADDDGLGMBHE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDBNDAFONKL_ADDDGLGMBHE_OFFSET))(this);
		}

		::System::String* DPBEEJGFJLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDBNDAFONKL_DPBEEJGFJLN_OFFSET))(this);
		}

		::System::String* EPKBEFCKKDJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDBNDAFONKL_EPKBEFCKKDJ_OFFSET))(this);
		}

	};
