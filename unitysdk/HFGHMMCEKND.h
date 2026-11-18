#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GECJABPLCEH.h"
#include "unitysdk/HFNNILMKDBF.h"
#include "unitysdk/KHJHMPAJDKG.h"
#include "unitysdk/POAGPDPBBEO.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OCLOOAAGDIH.h"

#define HFGHMMCEKND_BIMIMLPHKHO_OFFSET UNITYSDK_OFFSET(0x724BC0)
#define HFGHMMCEKND_DHHCABNIOAG_OFFSET UNITYSDK_OFFSET(0x724C10)

inline static constexpr unsigned int HFGHMMCEKND_TypeDefinitionIndex = 38450;

struct alignas(4) HFGHMMCEKND
{
	::POAGPDPBBEO KMDCNHNELAM; // 0x10
	::HFNNILMKDBF JMJLKDBDNNN; // 0xA4
	::GECJABPLCEH GFJPFAOCNGI; // 0xA5
	::KHJHMPAJDKG LPOBPAEDFCH; // 0xA6
	::System::Boolean AOJKBMGGHFG; // 0xA7

	::System::Void BIMIMLPHKHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGHMMCEKND_BIMIMLPHKHO_OFFSET))(this);
	}

	::OCLOOAAGDIH DHHCABNIOAG()
	{
		return ((::OCLOOAAGDIH(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGHMMCEKND_DHHCABNIOAG_OFFSET))(this);
	}
};
