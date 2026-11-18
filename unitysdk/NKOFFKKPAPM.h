#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCDKMHIIJMO.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/OPICNDJAPFN.h"

class DBEEELCGJOA;
class LNPEBGNBKMF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NKOFFKKPAPM_ACLAELIDELC_OFFSET UNITYSDK_OFFSET(0x1E1D4890)
#define NKOFFKKPAPM_CJBCHJLHELG_OFFSET UNITYSDK_OFFSET(0x1E1D4450)
#define NKOFFKKPAPM_KIBKMMDLHFD_OFFSET UNITYSDK_OFFSET(0x1E1D4270)
#define NKOFFKKPAPM_MNKPNPKONBP_OFFSET UNITYSDK_OFFSET(0x1E1D4350)
#define NKOFFKKPAPM_OHKCLMDBOID_OFFSET UNITYSDK_OFFSET(0x1E1D4800)
#define NKOFFKKPAPM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D4310)

inline static constexpr unsigned int NKOFFKKPAPM_TypeDefinitionIndex = 93418;

class NKOFFKKPAPM : public ::OPICNDJAPFN
{
public:
	::DBEEELCGJOA* OGDNJKJANEK; // 0x40
	::System::Collections::Generic::List_1<::GCDKMHIIJMO>* DECMOBMMBPO; // 0x48
	::JGLIFHIAIEH GIKOCHGDOKC; // 0x50

	::System::Void _ctor(::LNPEBGNBKMF* JLLAMEIACCM)
	{
		return ((::System::Void(*)(::PVOID, ::LNPEBGNBKMF*))((::PBYTE)hIl2Cpp + NKOFFKKPAPM__CTOR_OFFSET))(this, JLLAMEIACCM);
	}

	::System::Void KIBKMMDLHFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOFFKKPAPM_KIBKMMDLHFD_OFFSET))(this);
	}

	::System::String* MNKPNPKONBP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOFFKKPAPM_MNKPNPKONBP_OFFSET))(this);
	}

	::System::Void CJBCHJLHELG(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NKOFFKKPAPM_CJBCHJLHELG_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::String* OHKCLMDBOID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOFFKKPAPM_OHKCLMDBOID_OFFSET))(this);
	}

	::System::Void ACLAELIDELC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOFFKKPAPM_ACLAELIDELC_OFFSET))(this);
	}
};
