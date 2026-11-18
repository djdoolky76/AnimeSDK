#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"
#include "unitysdk/JGLIFHIAIEH.h"

class EIBHDPNCAMJ;
class JJCMMNDNBHC;

#define MNGIEFKBBGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8E540)

inline static constexpr unsigned int MNGIEFKBBGJ_TypeDefinitionIndex = 94092;

class MNGIEFKBBGJ : public ::BIHPBFHEOOA
{
public:
	::JJCMMNDNBHC* LGPAGLDDKGO; // 0x10
	::EIBHDPNCAMJ* LHKCELFMIFH; // 0x18
	::System::Int32 CKEDPOEIAMH; // 0x20
	::System::Int32 LJMPPBEMEPP; // 0x24
	::System::UInt32 CNENMOBJBBK; // 0x28
	::System::UInt32 BKLGNCBNEGM; // 0x2C
	::System::Int32 AGCLBKBJJBM; // 0x30
	::System::UInt32 HDGIELLOOEF; // 0x34
	::System::Boolean IMBKINHGHJN; // 0x38
	::System::Byte _padding0[0x3];
	::JGLIFHIAIEH OHOGDOMNHNK; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGIEFKBBGJ__CTOR_OFFSET))(this);
	}
};
