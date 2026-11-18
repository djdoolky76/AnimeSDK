#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIKMPLGDOPF.h"
#include "unitysdk/GKFLPGIJBNM.h"
#include "unitysdk/HMPPOPMFAEI.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define HKEOGIDPIKB_BKPJGMKKJHC_OFFSET UNITYSDK_OFFSET(0x7718B0)
#define HKEOGIDPIKB_CHGCPCJPHJM_OFFSET UNITYSDK_OFFSET(0x771860)
#define HKEOGIDPIKB_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7717E0)
#define HKEOGIDPIKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7717D0)

inline static constexpr unsigned int HKEOGIDPIKB_TypeDefinitionIndex = 63956;

struct alignas(4) HKEOGIDPIKB
{
	::HMPPOPMFAEI IBLHIPIBDFE; // 0x10
	::GKFLPGIJBNM PNJCOKBBCOB; // 0x14
	::GIKMPLGDOPF NJMGLGKDELD; // 0x18
	::GIKMPLGDOPF OFDDOCCMICH; // 0x1C

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEOGIDPIKB_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEOGIDPIKB_DPIHOJBBGLA_OFFSET))(this);
	}

	::GIKMPLGDOPF CHGCPCJPHJM()
	{
		return ((::GIKMPLGDOPF(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEOGIDPIKB_CHGCPCJPHJM_OFFSET))(this);
	}

	::System::Boolean BKPJGMKKJHC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEOGIDPIKB_BKPJGMKKJHC_OFFSET))(this);
	}
};
