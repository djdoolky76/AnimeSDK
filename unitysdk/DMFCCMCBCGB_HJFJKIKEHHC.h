#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMFCCMCBCGB;

#define DMFCCMCBCGB_HJFJKIKEHHC_BAKBBGDOIAD_OFFSET UNITYSDK_OFFSET(0x16BB7980)
#define DMFCCMCBCGB_HJFJKIKEHHC__CTOR_OFFSET UNITYSDK_OFFSET(0x16BB7970)

inline static constexpr unsigned int DMFCCMCBCGB_HJFJKIKEHHC_TypeDefinitionIndex = 88965;

class DMFCCMCBCGB_HJFJKIKEHHC : public ::System::Object
{
public:
	::DMFCCMCBCGB* KLHPEBKNIFB; // 0x10
	::System::Int32 EOGLMAEPALE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFCCMCBCGB_HJFJKIKEHHC__CTOR_OFFSET))(this);
	}

	::System::Void BAKBBGDOIAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFCCMCBCGB_HJFJKIKEHHC_BAKBBGDOIAD_OFFSET))(this);
	}
};
