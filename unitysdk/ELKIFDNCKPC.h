#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGAJKHIMKJP.h"
#include "unitysdk/Share/EItemType.h"

class DBMLGNBFJCD;
class FOLOGHLENFB;

#define ELKIFDNCKPC_GKILDJBDCAP_OFFSET UNITYSDK_OFFSET(0x17245570)
#define ELKIFDNCKPC__CTOR_OFFSET UNITYSDK_OFFSET(0x17245580)

inline static constexpr unsigned int ELKIFDNCKPC_TypeDefinitionIndex = 83952;

class ELKIFDNCKPC : public ::HGAJKHIMKJP
{
public:
	::DBMLGNBFJCD* HKBLIOHMNEA; // 0x70

	::System::Void _ctor(::System::UInt64 KGIOFDBFGAM, ::System::Int32 OIKFFGKDHME, ::FOLOGHLENFB* DFMKILICPFB, ::System::Int32 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::FOLOGHLENFB*, ::System::Int32))((::PBYTE)hIl2Cpp + ELKIFDNCKPC__CTOR_OFFSET))(this, KGIOFDBFGAM, OIKFFGKDHME, DFMKILICPFB, OHOGDOMNHNK);
	}

	::Share::EItemType GKILDJBDCAP()
	{
		return ((::Share::EItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKIFDNCKPC_GKILDJBDCAP_OFFSET))(this);
	}
};
