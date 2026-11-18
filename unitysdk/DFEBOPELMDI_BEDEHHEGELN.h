#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/System/Object.h"

#define DFEBOPELMDI_BEDEHHEGELN_JEMLJHOMGFK_OFFSET UNITYSDK_OFFSET(0x19D5C910)
#define DFEBOPELMDI_BEDEHHEGELN__CTOR_OFFSET UNITYSDK_OFFSET(0x19D5C900)

inline static constexpr unsigned int DFEBOPELMDI_BEDEHHEGELN_TypeDefinitionIndex = 71687;

class DFEBOPELMDI_BEDEHHEGELN : public ::System::Object
{
public:
	::HPBIMDNDPLK LPIHAHMNBIG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEBOPELMDI_BEDEHHEGELN__CTOR_OFFSET))(this);
	}

	::System::Void JEMLJHOMGFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEBOPELMDI_BEDEHHEGELN_JEMLJHOMGFK_OFFSET))(this);
	}
};
