#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define EBNCLECJFHF_CBIBIFBAIFA_OFFSET UNITYSDK_OFFSET(0x15466F60)
#define EBNCLECJFHF_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x15466D80)
#define EBNCLECJFHF_IPFGEIDINMP_OFFSET UNITYSDK_OFFSET(0x15466F70)
#define EBNCLECJFHF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15466D00)
#define EBNCLECJFHF_OHHBAPCMJAE_OFFSET UNITYSDK_OFFSET(0x15466F80)
#define EBNCLECJFHF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15466BA0)
#define EBNCLECJFHF_PBPDLBDHHHF_OFFSET UNITYSDK_OFFSET(0x15466F50)
#define EBNCLECJFHF__CTOR_OFFSET UNITYSDK_OFFSET(0x15466EC0)

inline static constexpr unsigned int EBNCLECJFHF_TypeDefinitionIndex = 87472;

class EBNCLECJFHF : public ::IOOIHHOJOPI
{
public:
	::MonoUITableScrollV2* _LFAJCKFBGFP_k__BackingField; // 0x28
	::LGINJIKKBJA* _HAPMDHLJNKG_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNCLECJFHF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBNCLECJFHF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void PBPDLBDHHHF(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + EBNCLECJFHF_PBPDLBDHHHF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNCLECJFHF_EFKGNFCEENK_OFFSET))(this);
	}

	::MonoUITableScrollV2* CBIBIFBAIFA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNCLECJFHF_CBIBIFBAIFA_OFFSET))(this);
	}

	::LGINJIKKBJA* IPFGEIDINMP()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNCLECJFHF_IPFGEIDINMP_OFFSET))(this);
	}

	::System::Void OHHBAPCMJAE(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + EBNCLECJFHF_OHHBAPCMJAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNCLECJFHF_KGEBDLGBGNM_OFFSET))(this);
	}
};
