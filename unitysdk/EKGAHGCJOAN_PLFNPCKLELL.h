#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;
class FMHDMLBDIJC;
namespace System { class Action; }

#define EKGAHGCJOAN_PLFNPCKLELL_CFOKBLNJHNE_OFFSET UNITYSDK_OFFSET(0x1426C2C0)
#define EKGAHGCJOAN_PLFNPCKLELL_PFMOLKIFADP_OFFSET UNITYSDK_OFFSET(0x1426C3C0)
#define EKGAHGCJOAN_PLFNPCKLELL__CTOR_OFFSET UNITYSDK_OFFSET(0x1426C2B0)

inline static constexpr unsigned int EKGAHGCJOAN_PLFNPCKLELL_TypeDefinitionIndex = 51213;

class EKGAHGCJOAN_PLFNPCKLELL : public ::System::Object
{
public:
	::FMHDMLBDIJC* PADJNMGMGHO; // 0x10
	::FMHDMLBDIJC* KDEHMPGOCEP; // 0x18
	::EKGAHGCJOAN* KLHPEBKNIFB; // 0x20
	::System::Action* DLMJCFBENGB; // 0x28
	::System::Action* OLBAKFLBNIG; // 0x30
	::System::Action* EDNJGMKPFHG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_PLFNPCKLELL__CTOR_OFFSET))(this);
	}

	::System::Void CFOKBLNJHNE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_PLFNPCKLELL_CFOKBLNJHNE_OFFSET))(this);
	}

	::System::Void PFMOLKIFADP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_PLFNPCKLELL_PFMOLKIFADP_OFFSET))(this);
	}
};
