#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define BICKFCGPCLK_CBIBIFBAIFA_OFFSET UNITYSDK_OFFSET(0x1691D350)
#define BICKFCGPCLK_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x1691D180)
#define BICKFCGPCLK_IPFGEIDINMP_OFFSET UNITYSDK_OFFSET(0x1691D360)
#define BICKFCGPCLK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1691D100)
#define BICKFCGPCLK_OHHBAPCMJAE_OFFSET UNITYSDK_OFFSET(0x1691D380)
#define BICKFCGPCLK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1691CFA0)
#define BICKFCGPCLK_PBPDLBDHHHF_OFFSET UNITYSDK_OFFSET(0x1691D370)
#define BICKFCGPCLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1691D2C0)

inline static constexpr unsigned int BICKFCGPCLK_TypeDefinitionIndex = 79044;

class BICKFCGPCLK : public ::IOOIHHOJOPI
{
public:
	::MonoUITableScrollV2* _LFAJCKFBGFP_k__BackingField; // 0x28
	::LGINJIKKBJA* _HAPMDHLJNKG_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICKFCGPCLK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BICKFCGPCLK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::MonoUITableScrollV2* CBIBIFBAIFA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + BICKFCGPCLK_CBIBIFBAIFA_OFFSET))(this);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICKFCGPCLK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICKFCGPCLK_EFKGNFCEENK_OFFSET))(this);
	}

	::LGINJIKKBJA* IPFGEIDINMP()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BICKFCGPCLK_IPFGEIDINMP_OFFSET))(this);
	}

	::System::Void PBPDLBDHHHF(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + BICKFCGPCLK_PBPDLBDHHHF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OHHBAPCMJAE(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + BICKFCGPCLK_OHHBAPCMJAE_OFFSET))(this, EGEGIMGMJHN);
	}
};
