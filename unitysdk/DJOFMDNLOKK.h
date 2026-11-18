#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFAOCMCHHKJ.h"
#include "unitysdk/System/ValueType.h"

class DKJANEGAOIF;

#define DJOFMDNLOKK__CTOR_OFFSET UNITYSDK_OFFSET(0x3F28E0)

inline static constexpr unsigned int DJOFMDNLOKK_TypeDefinitionIndex = 73429;

struct alignas(8) DJOFMDNLOKK
{
	::OFAOCMCHHKJ CCCFFMJBEGM; // 0x10
	::System::Byte _padding0[0x4];
	::DKJANEGAOIF* MDIJJIHFEPB; // 0x18

	::System::Void _ctor(::OFAOCMCHHKJ MFOOABADEHG, ::DKJANEGAOIF* EEHEAHILAHP)
	{
		return ((::System::Void(*)(::PVOID, ::OFAOCMCHHKJ, ::DKJANEGAOIF*))((::PBYTE)hIl2Cpp + DJOFMDNLOKK__CTOR_OFFSET))(this, MFOOABADEHG, EEHEAHILAHP);
	}
};
