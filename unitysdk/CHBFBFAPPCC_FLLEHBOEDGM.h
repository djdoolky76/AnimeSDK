#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMHLAGJKEPB.h"
#include "unitysdk/System/Object.h"

class CHBFBFAPPCC;

#define CHBFBFAPPCC_FLLEHBOEDGM_AAHNDIHNBAB_OFFSET UNITYSDK_OFFSET(0x1694FC90)
#define CHBFBFAPPCC_FLLEHBOEDGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1694FC80)

inline static constexpr unsigned int CHBFBFAPPCC_FLLEHBOEDGM_TypeDefinitionIndex = 41658;

class CHBFBFAPPCC_FLLEHBOEDGM : public ::System::Object
{
public:
	::CHBFBFAPPCC* KLHPEBKNIFB; // 0x10
	::IMHLAGJKEPB JBCNPOHMGPE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBFBFAPPCC_FLLEHBOEDGM__CTOR_OFFSET))(this);
	}

	::System::Void AAHNDIHNBAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBFBFAPPCC_FLLEHBOEDGM_AAHNDIHNBAB_OFFSET))(this);
	}
};
