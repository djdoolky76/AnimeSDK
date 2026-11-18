#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define GBDLKOPBDNG_CADKFJOCACH_OFFSET UNITYSDK_OFFSET(0x125C1100)
#define GBDLKOPBDNG_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x125C0EB0)
#define GBDLKOPBDNG_FKOJKFIBPAJ_OFFSET UNITYSDK_OFFSET(0x125C1130)
#define GBDLKOPBDNG_GKMPJBECDCC_OFFSET UNITYSDK_OFFSET(0x125C1140)
#define GBDLKOPBDNG_GMLPEJLAMHD_OFFSET UNITYSDK_OFFSET(0x125C1110)
#define GBDLKOPBDNG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x125C0E10)
#define GBDLKOPBDNG_NBJNPOENNKH_OFFSET UNITYSDK_OFFSET(0x125C10F0)
#define GBDLKOPBDNG_NOAFAMCECNB_OFFSET UNITYSDK_OFFSET(0x125C1120)
#define GBDLKOPBDNG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x125C0C90)
#define GBDLKOPBDNG__CTOR_OFFSET UNITYSDK_OFFSET(0x125C1060)

inline static constexpr unsigned int GBDLKOPBDNG_TypeDefinitionIndex = 64453;

class GBDLKOPBDNG : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::RectTransform* _LJEMGHKLDKL_k__BackingField; // 0x28
	::FGCOIBFFCHB* _LADCBAJKPMP_k__BackingField; // 0x30
	::FGCOIBFFCHB* _HBKMMABBNHD_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDLKOPBDNG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GBDLKOPBDNG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::UnityEngine::RectTransform* NBJNPOENNKH()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDLKOPBDNG_NBJNPOENNKH_OFFSET))(this);
	}

	::System::Void CADKFJOCACH(::FGCOIBFFCHB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + GBDLKOPBDNG_CADKFJOCACH_OFFSET))(this, EGEGIMGMJHN);
	}

	::FGCOIBFFCHB* GMLPEJLAMHD()
	{
		return ((::FGCOIBFFCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDLKOPBDNG_GMLPEJLAMHD_OFFSET))(this);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDLKOPBDNG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void NOAFAMCECNB(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + GBDLKOPBDNG_NOAFAMCECNB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FKOJKFIBPAJ(::FGCOIBFFCHB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + GBDLKOPBDNG_FKOJKFIBPAJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::FGCOIBFFCHB* GKMPJBECDCC()
	{
		return ((::FGCOIBFFCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDLKOPBDNG_GKMPJBECDCC_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDLKOPBDNG_EFKGNFCEENK_OFFSET))(this);
	}
};
