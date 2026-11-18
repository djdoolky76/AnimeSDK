#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FFLAEMCMDEN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x140EF210)
#define FFLAEMCMDEN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x140EEFE0)
#define FFLAEMCMDEN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x140EEBE0)
#define FFLAEMCMDEN__CTOR_OFFSET UNITYSDK_OFFSET(0x140EF200)

inline static constexpr unsigned int FFLAEMCMDEN_TypeDefinitionIndex = 61838;

class FFLAEMCMDEN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BGPMNJDDNBL; // 0x18
	::UnityEngine::RectTransform* LBEOLEEBMNE; // 0x20
	::FGCOIBFFCHB* NFHEOAKDFDN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* KJLOEDCNNBK; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* KLEAEBCODPG; // 0x38
	::FGCOIBFFCHB* FNHDAAJHIOP; // 0x40
	::UnityEngine::RectTransform* MCGPPADHCLJ; // 0x48
	::UnityEngine::RectTransform* KOOFLLLGOHO; // 0x50
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x58
	::FGCOIBFFCHB* BOIADKDBJJJ; // 0x60
	::FGCOIBFFCHB* NDKKMADEFAJ; // 0x68
	::UnityEngine::RectTransform* NDPFKBKABLI; // 0x70
	::MoleMole::NotificationBadgeEx* MAMKMHKDPCA; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* OEDOKBJLPJI; // 0x80
	::FGCOIBFFCHB* PKJKDAHBENI; // 0x88
	::MoleMole::MonoGamepadSelectable* DANNBOGNOEH; // 0x90
	::FGCOIBFFCHB* DMBIIKJBHGM; // 0x98
	::FGCOIBFFCHB* OGIMALLNJJB; // 0xA0
	::UnityEngine::UI::Extension::UILocalizationText* BLLBMCGJFBF; // 0xA8
	::FGCOIBFFCHB* KCOFEBNJKAG; // 0xB0
	::UnityEngine::RectTransform* HMPNHFMMJBE; // 0xB8
	::FGCOIBFFCHB* EKMHFLHHHDE; // 0xC0
	::FGCOIBFFCHB* NMBALEHBMME; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLAEMCMDEN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFLAEMCMDEN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFLAEMCMDEN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLAEMCMDEN_KGEBDLGBGNM_OFFSET))(this);
	}
};
