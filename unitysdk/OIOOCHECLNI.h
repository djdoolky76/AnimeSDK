#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DPAENGNOHGK;
class HGIDAMPAOGK;

#define OIOOCHECLNI_BMLBMPDDMLG_OFFSET UNITYSDK_OFFSET(0x1B79E110)
#define OIOOCHECLNI_CANJMFPDIJM_OFFSET UNITYSDK_OFFSET(0x1B79DFD0)
#define OIOOCHECLNI_CGEKPHBHMLL_OFFSET UNITYSDK_OFFSET(0x1B79DF40)
#define OIOOCHECLNI_JOEFKNAIDOF_OFFSET UNITYSDK_OFFSET(0x1B79E0B0)
#define OIOOCHECLNI_KIPGBLFACHN_OFFSET UNITYSDK_OFFSET(0x1B79DE90)
#define OIOOCHECLNI_KLGOHOPOKEN_OFFSET UNITYSDK_OFFSET(0x1B79E170)
#define OIOOCHECLNI_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B79DF20)
#define OIOOCHECLNI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B79DE80)

inline static constexpr unsigned int OIOOCHECLNI_TypeDefinitionIndex = 68140;

class OIOOCHECLNI : public ::System::Object
{
public:
	::DPAENGNOHGK* AHMFPFACACD; // 0x10
	::HGIDAMPAOGK* POEPOEKBDHM; // 0x18

	::System::Void _ctor(::DPAENGNOHGK* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::DPAENGNOHGK*))((::PBYTE)hIl2Cpp + OIOOCHECLNI__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean KIPGBLFACHN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOOCHECLNI_KIPGBLFACHN_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOOCHECLNI_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean CGEKPHBHMLL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOOCHECLNI_CGEKPHBHMLL_OFFSET))(this);
	}

	::System::Boolean CANJMFPDIJM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOOCHECLNI_CANJMFPDIJM_OFFSET))(this);
	}

	::System::Int32 JOEFKNAIDOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOOCHECLNI_JOEFKNAIDOF_OFFSET))(this);
	}

	::System::Boolean BMLBMPDDMLG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOOCHECLNI_BMLBMPDDMLG_OFFSET))(this);
	}

	::System::Int32 KLGOHOPOKEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOOCHECLNI_KLGOHOPOKEN_OFFSET))(this);
	}
};
