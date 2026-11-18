#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define FFPGBJCOFHK_CBIBIFBAIFA_OFFSET UNITYSDK_OFFSET(0x17140C10)
#define FFPGBJCOFHK_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x17140A20)
#define FFPGBJCOFHK_IPFGEIDINMP_OFFSET UNITYSDK_OFFSET(0x17140C20)
#define FFPGBJCOFHK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x171409A0)
#define FFPGBJCOFHK_OHHBAPCMJAE_OFFSET UNITYSDK_OFFSET(0x17140C00)
#define FFPGBJCOFHK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17140840)
#define FFPGBJCOFHK_PBPDLBDHHHF_OFFSET UNITYSDK_OFFSET(0x17140BF0)
#define FFPGBJCOFHK__CTOR_OFFSET UNITYSDK_OFFSET(0x17140B60)

inline static constexpr unsigned int FFPGBJCOFHK_TypeDefinitionIndex = 60244;

class FFPGBJCOFHK : public ::IOOIHHOJOPI
{
public:
	::LGINJIKKBJA* _HAPMDHLJNKG_k__BackingField; // 0x28
	::MonoUITableScrollV2* _LFAJCKFBGFP_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPGBJCOFHK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFPGBJCOFHK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void PBPDLBDHHHF(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + FFPGBJCOFHK_PBPDLBDHHHF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPGBJCOFHK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void OHHBAPCMJAE(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + FFPGBJCOFHK_OHHBAPCMJAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::MonoUITableScrollV2* CBIBIFBAIFA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPGBJCOFHK_CBIBIFBAIFA_OFFSET))(this);
	}

	::LGINJIKKBJA* IPFGEIDINMP()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPGBJCOFHK_IPFGEIDINMP_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPGBJCOFHK_EFKGNFCEENK_OFFSET))(this);
	}
};
