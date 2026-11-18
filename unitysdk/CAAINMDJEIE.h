#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define CAAINMDJEIE_CBIBIFBAIFA_OFFSET UNITYSDK_OFFSET(0x10E25B10)
#define CAAINMDJEIE_DJBACDJFAOF_OFFSET UNITYSDK_OFFSET(0x10E25B40)
#define CAAINMDJEIE_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x10E25940)
#define CAAINMDJEIE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10E258C0)
#define CAAINMDJEIE_KPPDBECJGCP_OFFSET UNITYSDK_OFFSET(0x10E25B20)
#define CAAINMDJEIE_OHHBAPCMJAE_OFFSET UNITYSDK_OFFSET(0x10E25B30)
#define CAAINMDJEIE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10E25760)
#define CAAINMDJEIE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E25A80)

inline static constexpr unsigned int CAAINMDJEIE_TypeDefinitionIndex = 54638;

class CAAINMDJEIE : public ::IOOIHHOJOPI
{
public:
	::MonoUITableScrollV2* _LFAJCKFBGFP_k__BackingField; // 0x28
	::LGINJIKKBJA* _FPLOLCLDPJF_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAINMDJEIE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CAAINMDJEIE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::MonoUITableScrollV2* CBIBIFBAIFA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAINMDJEIE_CBIBIFBAIFA_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAINMDJEIE_EFKGNFCEENK_OFFSET))(this);
	}

	::LGINJIKKBJA* KPPDBECJGCP()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAINMDJEIE_KPPDBECJGCP_OFFSET))(this);
	}

	::System::Void OHHBAPCMJAE(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CAAINMDJEIE_OHHBAPCMJAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DJBACDJFAOF(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + CAAINMDJEIE_DJBACDJFAOF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAINMDJEIE_KGEBDLGBGNM_OFFSET))(this);
	}
};
