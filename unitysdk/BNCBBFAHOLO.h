#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define BNCBBFAHOLO_ADDDGLGMBHE_OFFSET UNITYSDK_OFFSET(0x2A140)
#define BNCBBFAHOLO_DPBEEJGFJLN_OFFSET UNITYSDK_OFFSET(0x2A1B0)
#define BNCBBFAHOLO_EPKBEFCKKDJ_OFFSET UNITYSDK_OFFSET(0x2A200)
#define BNCBBFAHOLO_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x2A0F0)

inline static constexpr unsigned int BNCBBFAHOLO_TypeDefinitionIndex = 74212;

	struct alignas(4) BNCBBFAHOLO
	{
		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCBBFAHOLO_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* ADDDGLGMBHE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCBBFAHOLO_ADDDGLGMBHE_OFFSET))(this);
		}

		::System::String* DPBEEJGFJLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCBBFAHOLO_DPBEEJGFJLN_OFFSET))(this);
		}

		::System::String* EPKBEFCKKDJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCBBFAHOLO_EPKBEFCKKDJ_OFFSET))(this);
		}

	};
