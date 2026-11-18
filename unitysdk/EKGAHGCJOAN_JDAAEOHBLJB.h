#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/System/Object.h"

#define EKGAHGCJOAN_JDAAEOHBLJB_POJGMPBPCAI_OFFSET UNITYSDK_OFFSET(0x16158AB0)
#define EKGAHGCJOAN_JDAAEOHBLJB__CTOR_OFFSET UNITYSDK_OFFSET(0x16158AA0)

inline static constexpr unsigned int EKGAHGCJOAN_JDAAEOHBLJB_TypeDefinitionIndex = 51231;

class EKGAHGCJOAN_JDAAEOHBLJB : public ::System::Object
{
public:
	::HPBIMDNDPLK OAKGFCEGIAE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_JDAAEOHBLJB__CTOR_OFFSET))(this);
	}

	::System::Void POJGMPBPCAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_JDAAEOHBLJB_POJGMPBPCAI_OFFSET))(this);
	}
};
