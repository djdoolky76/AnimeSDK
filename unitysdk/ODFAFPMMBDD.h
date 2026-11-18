#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJFOMLLPEDI.h"
#include "unitysdk/System/Object.h"

#define ODFAFPMMBDD_HJNGAMBABOP_OFFSET UNITYSDK_OFFSET(0x16BFCB90)
#define ODFAFPMMBDD__CTOR_OFFSET UNITYSDK_OFFSET(0x16BFCBA0)

inline static constexpr unsigned int ODFAFPMMBDD_TypeDefinitionIndex = 75457;

class ODFAFPMMBDD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFAFPMMBDD__CTOR_OFFSET))(this);
	}

	::FJFOMLLPEDI HJNGAMBABOP()
	{
		return ((::FJFOMLLPEDI(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFAFPMMBDD_HJNGAMBABOP_OFFSET))(this);
	}
};
