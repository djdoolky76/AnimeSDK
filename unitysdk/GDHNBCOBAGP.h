#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define GDHNBCOBAGP_ADDDGLGMBHE_OFFSET UNITYSDK_OFFSET(0x304FDF0)
#define GDHNBCOBAGP_DPBEEJGFJLN_OFFSET UNITYSDK_OFFSET(0x304FE60)
#define GDHNBCOBAGP_EPKBEFCKKDJ_OFFSET UNITYSDK_OFFSET(0x304FED0)
#define GDHNBCOBAGP_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x304FDA0)

inline static constexpr unsigned int GDHNBCOBAGP_TypeDefinitionIndex = 74217;

	struct alignas(4) GDHNBCOBAGP
	{
		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHNBCOBAGP_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* ADDDGLGMBHE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHNBCOBAGP_ADDDGLGMBHE_OFFSET))(this);
		}

		::System::String* DPBEEJGFJLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHNBCOBAGP_DPBEEJGFJLN_OFFSET))(this);
		}

		::System::String* EPKBEFCKKDJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHNBCOBAGP_EPKBEFCKKDJ_OFFSET))(this);
		}

	};
