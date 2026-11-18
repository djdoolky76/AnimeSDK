#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGAJKHIMKJP.h"
#include "unitysdk/Share/EItemType.h"

class FOLOGHLENFB;

#define BAIDCOJBCCB_GKILDJBDCAP_OFFSET UNITYSDK_OFFSET(0x12678B40)
#define BAIDCOJBCCB__CTOR_OFFSET UNITYSDK_OFFSET(0x12678B50)

inline static constexpr unsigned int BAIDCOJBCCB_TypeDefinitionIndex = 58793;

class BAIDCOJBCCB : public ::HGAJKHIMKJP
{
public:
	::System::Void _ctor(::System::UInt64 KGIOFDBFGAM, ::System::Int32 OIKFFGKDHME, ::FOLOGHLENFB* DFMKILICPFB, ::System::Int32 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::FOLOGHLENFB*, ::System::Int32))((::PBYTE)hIl2Cpp + BAIDCOJBCCB__CTOR_OFFSET))(this, KGIOFDBFGAM, OIKFFGKDHME, DFMKILICPFB, OHOGDOMNHNK);
	}

	::Share::EItemType GKILDJBDCAP()
	{
		return ((::Share::EItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIDCOJBCCB_GKILDJBDCAP_OFFSET))(this);
	}
};
