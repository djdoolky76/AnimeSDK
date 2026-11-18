#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CDCKEEOCDBI_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x14F1A780)
#define CDCKEEOCDBI_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x14F1A5A0)
#define CDCKEEOCDBI_HDPEBEKHNLG_OFFSET UNITYSDK_OFFSET(0x14F1A7A0)
#define CDCKEEOCDBI_IIKDJHLGGIL_OFFSET UNITYSDK_OFFSET(0x14F1A770)
#define CDCKEEOCDBI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14F1A520)
#define CDCKEEOCDBI_NBCFMMIBLMC_OFFSET UNITYSDK_OFFSET(0x14F1A790)
#define CDCKEEOCDBI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F1A3C0)
#define CDCKEEOCDBI__CTOR_OFFSET UNITYSDK_OFFSET(0x14F1A6E0)

inline static constexpr unsigned int CDCKEEOCDBI_TypeDefinitionIndex = 91919;

class CDCKEEOCDBI : public ::IOOIHHOJOPI
{
public:
	::FGCOIBFFCHB* _MGLIAEMIBDK_k__BackingField; // 0x28
	::UnityEngine::RectTransform* _DEJNOJBAFDE_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCKEEOCDBI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CDCKEEOCDBI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCKEEOCDBI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void IIKDJHLGGIL(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CDCKEEOCDBI_IIKDJHLGGIL_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::RectTransform* CJBFCLMFDOM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCKEEOCDBI_CJBFCLMFDOM_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCKEEOCDBI_EFKGNFCEENK_OFFSET))(this);
	}

	::FGCOIBFFCHB* NBCFMMIBLMC()
	{
		return ((::FGCOIBFFCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCKEEOCDBI_NBCFMMIBLMC_OFFSET))(this);
	}

	::System::Void HDPEBEKHNLG(::FGCOIBFFCHB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + CDCKEEOCDBI_HDPEBEKHNLG_OFFSET))(this, EGEGIMGMJHN);
	}
};
