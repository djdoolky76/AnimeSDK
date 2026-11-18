#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEIDBMCINCI.h"
#include "unitysdk/NHPFMFABMEC.h"

namespace System { class EventArgs; }

#define DFOJHBNDCMP_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x19D5E2E0)
#define DFOJHBNDCMP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19D5E250)
#define DFOJHBNDCMP_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x19D5E130)
#define DFOJHBNDCMP_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x19D5E370)
#define DFOJHBNDCMP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19D5DF80)
#define DFOJHBNDCMP_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x19D5E0C0)
#define DFOJHBNDCMP__CTOR_OFFSET UNITYSDK_OFFSET(0x19D5E240)

inline static constexpr unsigned int DFOJHBNDCMP_TypeDefinitionIndex = 91556;

class DFOJHBNDCMP : public ::NHPFMFABMEC
{
public:
	::GEIDBMCINCI LHJMEOCJPJO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOJHBNDCMP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOJHBNDCMP_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DFOJHBNDCMP_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOJHBNDCMP_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOJHBNDCMP_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOJHBNDCMP_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DFOJHBNDCMP_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}
};
