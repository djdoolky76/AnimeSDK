#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGAJKHIMKJP.h"
#include "unitysdk/Share/EItemType.h"

class FOLOGHLENFB;

#define OLHKONLFDKH_GKILDJBDCAP_OFFSET UNITYSDK_OFFSET(0x16F82E90)
#define OLHKONLFDKH__CTOR_OFFSET UNITYSDK_OFFSET(0x16F82EA0)

inline static constexpr unsigned int OLHKONLFDKH_TypeDefinitionIndex = 42472;

class OLHKONLFDKH : public ::HGAJKHIMKJP
{
public:
	::System::Void _ctor(::System::UInt64 KGIOFDBFGAM, ::System::Int32 OIKFFGKDHME, ::FOLOGHLENFB* DFMKILICPFB, ::System::Int32 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::FOLOGHLENFB*, ::System::Int32))((::PBYTE)hIl2Cpp + OLHKONLFDKH__CTOR_OFFSET))(this, KGIOFDBFGAM, OIKFFGKDHME, DFMKILICPFB, OHOGDOMNHNK);
	}

	::Share::EItemType GKILDJBDCAP()
	{
		return ((::Share::EItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHKONLFDKH_GKILDJBDCAP_OFFSET))(this);
	}
};
