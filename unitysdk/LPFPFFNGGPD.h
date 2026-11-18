#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LPFPFFNGGPD_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x151B7860)
#define LPFPFFNGGPD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x151B76B0)
#define LPFPFFNGGPD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x151B7310)
#define LPFPFFNGGPD__CTOR_OFFSET UNITYSDK_OFFSET(0x151B80D0)

inline static constexpr unsigned int LPFPFFNGGPD_TypeDefinitionIndex = 82698;

class LPFPFFNGGPD : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DBMPEIKCMME; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* LGNGNJHIFOH; // 0x30
	::FGCOIBFFCHB* ANHMOECOMJL; // 0x38
	::LGINJIKKBJA* ONDPNFKAIEK; // 0x40
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* JBAAEDGMNLL; // 0x50
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x58
	::UnityEngine::RectTransform* LBAPCNNGOIJ; // 0x60
	::FGCOIBFFCHB* NPHDKBLEAHB; // 0x68
	::FGCOIBFFCHB* PFEJFPHFGON; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* BKDLMGEAFDK; // 0x78
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x80
	::FGCOIBFFCHB* GFLEPFOCFKF; // 0x88
	::LGINJIKKBJA* PKNOIFKEOIA; // 0x90
	::FGCOIBFFCHB* GMIBHPDHPML; // 0x98
	::UnityEngine::RectTransform* ADMDKBACKEB; // 0xA0
	::UnityEngine::RectTransform* MHANJIJOCJL; // 0xA8
	::UnityEngine::RectTransform* PBACEAAFKGL; // 0xB0
	::FGCOIBFFCHB* GOKOIMGBPAO; // 0xB8
	::UnityEngine::RectTransform* MCGPPADHCLJ; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFPFFNGGPD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LPFPFFNGGPD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFPFFNGGPD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFPFFNGGPD_EFKGNFCEENK_OFFSET))(this);
	}
};
