#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

#define FGCJPPBKBGN_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x14AC6A80)
#define FGCJPPBKBGN_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x14AC6B80)
#define FGCJPPBKBGN__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC6B10)

inline static constexpr unsigned int FGCJPPBKBGN_TypeDefinitionIndex = 88273;

class FGCJPPBKBGN : public ::PKMJPMFCNBK
{
public:
	::System::Boolean LNFCFKJFPOO; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCJPPBKBGN__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCJPPBKBGN_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCJPPBKBGN_KHJELIBOECB_OFFSET))(this);
	}
};
