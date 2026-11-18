#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MELFFONPBBD;

#define MKFNBHDICNJ_KACECFJDDFD_FOPNNJCNEHP_OFFSET UNITYSDK_OFFSET(0x1A695DD0)
#define MKFNBHDICNJ_KACECFJDDFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A670690)

inline static constexpr unsigned int MKFNBHDICNJ_KACECFJDDFD_TypeDefinitionIndex = 61377;

class MKFNBHDICNJ_KACECFJDDFD : public ::System::Object
{
public:
	::System::UInt32 KFCGDPDKPGL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_KACECFJDDFD__CTOR_OFFSET))(this);
	}

	::System::Boolean FOPNNJCNEHP(::MELFFONPBBD* ONOAGAPJNCG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MELFFONPBBD*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_KACECFJDDFD_FOPNNJCNEHP_OFFSET))(this, ONOAGAPJNCG);
	}
};
