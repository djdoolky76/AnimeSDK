#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define FNKCIIKFCCL_ANKDIPIADGH_OFFSET UNITYSDK_OFFSET(0x11C74650)
#define FNKCIIKFCCL_CBIBIFBAIFA_OFFSET UNITYSDK_OFFSET(0x11C74660)
#define FNKCIIKFCCL_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x11C74460)
#define FNKCIIKFCCL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11C743E0)
#define FNKCIIKFCCL_OGMEFOFLPFB_OFFSET UNITYSDK_OFFSET(0x11C74630)
#define FNKCIIKFCCL_OHHBAPCMJAE_OFFSET UNITYSDK_OFFSET(0x11C74640)
#define FNKCIIKFCCL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11C74280)
#define FNKCIIKFCCL__CTOR_OFFSET UNITYSDK_OFFSET(0x11C745A0)

inline static constexpr unsigned int FNKCIIKFCCL_TypeDefinitionIndex = 60394;

class FNKCIIKFCCL : public ::IOOIHHOJOPI
{
public:
	::LGINJIKKBJA* _DIHPLOCAPPO_k__BackingField; // 0x28
	::MonoUITableScrollV2* _LFAJCKFBGFP_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKCIIKFCCL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNKCIIKFCCL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKCIIKFCCL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void OGMEFOFLPFB(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + FNKCIIKFCCL_OGMEFOFLPFB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKCIIKFCCL_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void OHHBAPCMJAE(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + FNKCIIKFCCL_OHHBAPCMJAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::LGINJIKKBJA* ANKDIPIADGH()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKCIIKFCCL_ANKDIPIADGH_OFFSET))(this);
	}

	::MonoUITableScrollV2* CBIBIFBAIFA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKCIIKFCCL_CBIBIFBAIFA_OFFSET))(this);
	}
};
