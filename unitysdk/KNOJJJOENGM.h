#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGAJKHIMKJP.h"
#include "unitysdk/Share/EItemType.h"

class FOLOGHLENFB;

#define KNOJJJOENGM_GKILDJBDCAP_OFFSET UNITYSDK_OFFSET(0x129ABB80)
#define KNOJJJOENGM__CTOR_OFFSET UNITYSDK_OFFSET(0x129ABB90)

inline static constexpr unsigned int KNOJJJOENGM_TypeDefinitionIndex = 83221;

class KNOJJJOENGM : public ::HGAJKHIMKJP
{
public:
	::System::Void _ctor(::System::UInt64 KGIOFDBFGAM, ::System::Int32 OIKFFGKDHME, ::FOLOGHLENFB* DFMKILICPFB, ::System::Int32 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::FOLOGHLENFB*, ::System::Int32))((::PBYTE)hIl2Cpp + KNOJJJOENGM__CTOR_OFFSET))(this, KGIOFDBFGAM, OIKFFGKDHME, DFMKILICPFB, OHOGDOMNHNK);
	}

	::Share::EItemType GKILDJBDCAP()
	{
		return ((::Share::EItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOJJJOENGM_GKILDJBDCAP_OFFSET))(this);
	}
};
