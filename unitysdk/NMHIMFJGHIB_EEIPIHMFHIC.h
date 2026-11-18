#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/Cameras/CameraFollowCalcData.h"

#define NMHIMFJGHIB_EEIPIHMFHIC_BKMMJBOHAED_OFFSET UNITYSDK_OFFSET(0x808BB0)
#define NMHIMFJGHIB_EEIPIHMFHIC_FGDLMEGLCDO_OFFSET UNITYSDK_OFFSET(0x808BD0)
#define NMHIMFJGHIB_EEIPIHMFHIC_GKMGMHMBNJL_OFFSET UNITYSDK_OFFSET(0x1AE2B4F0)
#define NMHIMFJGHIB_EEIPIHMFHIC_ICKDGJECMKF_OFFSET UNITYSDK_OFFSET(0x808C80)
#define NMHIMFJGHIB_EEIPIHMFHIC_OJJABHMIOMK_OFFSET UNITYSDK_OFFSET(0x808D30)
#define NMHIMFJGHIB_EEIPIHMFHIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE2B3D0)
#define NMHIMFJGHIB_EEIPIHMFHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x808B20)

inline static constexpr unsigned int NMHIMFJGHIB_EEIPIHMFHIC_TypeDefinitionIndex = 43787;

struct alignas(4) NMHIMFJGHIB_EEIPIHMFHIC
{
	static ::NMHIMFJGHIB_EEIPIHMFHIC* StaticGet_CKLNGEOKBIH()
	{
		return (::NMHIMFJGHIB_EEIPIHMFHIC*)Il2CppClass::FromTypeDefinitionIndex(NMHIMFJGHIB_EEIPIHMFHIC_TypeDefinitionIndex)->GetStaticField(0xD040);
	}
	::System::Single DOGBLKEDMJM; // 0x10
	::System::Single CIJDJLODEIN; // 0x14
	::System::Single HJFMOMGOBGH; // 0x18
	::System::Single GAHKCOEIPMG; // 0x1C
	::UnityEngine::Vector3 OPIKINHCDPN; // 0x20
	::UnityEngine::Vector3 PFPMHBEIPCO; // 0x2C
	::System::Single IBOIAHLDPPA; // 0x38
	::System::Single ABFKNNDGJHC; // 0x3C

	::System::Void _ctor(::System::Single DKJACOOKAFE, ::System::Single EKPDMMNJKNC, ::System::Single DADGJBMBHGO, ::UnityEngine::Vector3 IEBNGHJDFLG, ::UnityEngine::Vector3 BLAKDDAMKOK, ::System::Single KHBEHEMBBKE, ::System::Single KGMELMKFJLP, ::System::Single CCGGCLNCCFG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NMHIMFJGHIB_EEIPIHMFHIC__CTOR_OFFSET))(this, DKJACOOKAFE, EKPDMMNJKNC, DADGJBMBHGO, IEBNGHJDFLG, BLAKDDAMKOK, KHBEHEMBBKE, KGMELMKFJLP, CCGGCLNCCFG);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMHIMFJGHIB_EEIPIHMFHIC__CCTOR_OFFSET))();
	}

	/*
	::NMHIMFJGHIB_EEIPIHMFHIC BKMMJBOHAED(::System::Single KGHNBNOMMJI)
	{
		return ((::NMHIMFJGHIB_EEIPIHMFHIC(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMHIMFJGHIB_EEIPIHMFHIC_BKMMJBOHAED_OFFSET))(this, KGHNBNOMMJI);
	}
	*/

	/*
	static ::NMHIMFJGHIB_EEIPIHMFHIC GKMGMHMBNJL(::MoleMole::Cameras::CameraFollowCalcData& KHGFAKJKDGG, ::MoleMole::Cameras::CameraFollowCalcData& HODAIDNDKHD, ::UnityEngine::Vector3 KEBCGFCNDIL, ::UnityEngine::Vector3 FBMBLKAALHH, ::UnityEngine::Vector3 CGPGOMMIGFD, ::UnityEngine::Vector3 GCFLIJGFGFA)
	{
		return ((::NMHIMFJGHIB_EEIPIHMFHIC(*)(::MoleMole::Cameras::CameraFollowCalcData&, ::MoleMole::Cameras::CameraFollowCalcData&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NMHIMFJGHIB_EEIPIHMFHIC_GKMGMHMBNJL_OFFSET))(KHGFAKJKDGG, HODAIDNDKHD, KEBCGFCNDIL, FBMBLKAALHH, CGPGOMMIGFD, GCFLIJGFGFA);
	}
	*/

	::UnityEngine::Vector3 FGDLMEGLCDO(::UnityEngine::Vector3 HODAIDNDKHD)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NMHIMFJGHIB_EEIPIHMFHIC_FGDLMEGLCDO_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Void ICKDGJECMKF(::MoleMole::Cameras::CameraFollowCalcData& HODAIDNDKHD, ::MoleMole::Cameras::CameraFollowCalcData& IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraFollowCalcData&, ::MoleMole::Cameras::CameraFollowCalcData&))((::PBYTE)hIl2Cpp + NMHIMFJGHIB_EEIPIHMFHIC_ICKDGJECMKF_OFFSET))(this, HODAIDNDKHD, IGAAKDOIPNN);
	}

	::UnityEngine::Vector3 OJJABHMIOMK(::UnityEngine::Vector3 HODAIDNDKHD)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NMHIMFJGHIB_EEIPIHMFHIC_OJJABHMIOMK_OFFSET))(this, HODAIDNDKHD);
	}
};
