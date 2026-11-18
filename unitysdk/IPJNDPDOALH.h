#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define IPJNDPDOALH_CBIBIFBAIFA_OFFSET UNITYSDK_OFFSET(0x13AB6F80)
#define IPJNDPDOALH_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x13AB6DA0)
#define IPJNDPDOALH_IPFGEIDINMP_OFFSET UNITYSDK_OFFSET(0x13AB6F70)
#define IPJNDPDOALH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13AB6D20)
#define IPJNDPDOALH_OHHBAPCMJAE_OFFSET UNITYSDK_OFFSET(0x13AB6FA0)
#define IPJNDPDOALH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13AB6BC0)
#define IPJNDPDOALH_PBPDLBDHHHF_OFFSET UNITYSDK_OFFSET(0x13AB6F90)
#define IPJNDPDOALH__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB6EE0)

inline static constexpr unsigned int IPJNDPDOALH_TypeDefinitionIndex = 44737;

class IPJNDPDOALH : public ::IOOIHHOJOPI
{
public:
	::LGINJIKKBJA* _HAPMDHLJNKG_k__BackingField; // 0x28
	::MonoUITableScrollV2* _LFAJCKFBGFP_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPJNDPDOALH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IPJNDPDOALH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::LGINJIKKBJA* IPFGEIDINMP()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPJNDPDOALH_IPFGEIDINMP_OFFSET))(this);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPJNDPDOALH_KGEBDLGBGNM_OFFSET))(this);
	}

	::MonoUITableScrollV2* CBIBIFBAIFA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPJNDPDOALH_CBIBIFBAIFA_OFFSET))(this);
	}

	::System::Void PBPDLBDHHHF(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + IPJNDPDOALH_PBPDLBDHHHF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OHHBAPCMJAE(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + IPJNDPDOALH_OHHBAPCMJAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPJNDPDOALH_EFKGNFCEENK_OFFSET))(this);
	}
};
