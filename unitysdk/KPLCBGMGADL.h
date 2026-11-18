#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define KPLCBGMGADL_CBIBIFBAIFA_OFFSET UNITYSDK_OFFSET(0x126BC2B0)
#define KPLCBGMGADL_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x126BC2F0)
#define KPLCBGMGADL_CKLKOKGHIEG_OFFSET UNITYSDK_OFFSET(0x126BC300)
#define KPLCBGMGADL_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x126BC010)
#define KPLCBGMGADL_IDHIPCGBJFM_OFFSET UNITYSDK_OFFSET(0x126BC320)
#define KPLCBGMGADL_IIKDJHLGGIL_OFFSET UNITYSDK_OFFSET(0x126BC2C0)
#define KPLCBGMGADL_LGAJNJAIIJC_OFFSET UNITYSDK_OFFSET(0x126BC2D0)
#define KPLCBGMGADL_NNBEEBICJHP_OFFSET UNITYSDK_OFFSET(0x126BC2E0)
#define KPLCBGMGADL_OHHBAPCMJAE_OFFSET UNITYSDK_OFFSET(0x126BC310)
#define KPLCBGMGADL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x126BBF20)
#define KPLCBGMGADL__CTOR_OFFSET UNITYSDK_OFFSET(0x126BC220)

inline static constexpr unsigned int KPLCBGMGADL_TypeDefinitionIndex = 75199;

class KPLCBGMGADL : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::RectTransform* _DDLFFONKNJL_k__BackingField; // 0x28
	::MoleMole::MonoGamepadCustomList* _BKEMFJIKHDM_k__BackingField; // 0x30
	::MonoUITableScrollV2* _LFAJCKFBGFP_k__BackingField; // 0x38
	::UnityEngine::RectTransform* _DEJNOJBAFDE_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLCBGMGADL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KPLCBGMGADL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::MonoUITableScrollV2* CBIBIFBAIFA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLCBGMGADL_CBIBIFBAIFA_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLCBGMGADL_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void IIKDJHLGGIL(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + KPLCBGMGADL_IIKDJHLGGIL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LGAJNJAIIJC(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + KPLCBGMGADL_LGAJNJAIIJC_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::MonoGamepadCustomList* NNBEEBICJHP()
	{
		return ((::MoleMole::MonoGamepadCustomList*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLCBGMGADL_NNBEEBICJHP_OFFSET))(this);
	}

	::UnityEngine::RectTransform* CJBFCLMFDOM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLCBGMGADL_CJBFCLMFDOM_OFFSET))(this);
	}

	::System::Void CKLKOKGHIEG(::MoleMole::MonoGamepadCustomList* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadCustomList*))((::PBYTE)hIl2Cpp + KPLCBGMGADL_CKLKOKGHIEG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OHHBAPCMJAE(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + KPLCBGMGADL_OHHBAPCMJAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::RectTransform* IDHIPCGBJFM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLCBGMGADL_IDHIPCGBJFM_OFFSET))(this);
	}
};
