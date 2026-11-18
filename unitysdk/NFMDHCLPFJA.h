#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NFMDHCLPFJA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12C5C3C0)
#define NFMDHCLPFJA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12C5C160)
#define NFMDHCLPFJA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12C5BCE0)
#define NFMDHCLPFJA__CTOR_OFFSET UNITYSDK_OFFSET(0x12C5C3B0)

inline static constexpr unsigned int NFMDHCLPFJA_TypeDefinitionIndex = 89461;

class NFMDHCLPFJA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* EJNPJMNAAHE; // 0x18
	::FGCOIBFFCHB* KEGNNHIHKOJ; // 0x20
	::MoleMole::NotificationBadgeEx* LPLEFLENCMP; // 0x28
	::FGCOIBFFCHB* NKKFNJHIKIE; // 0x30
	::UnityEngine::RectTransform* AFKNADHJJLJ; // 0x38
	::FGCOIBFFCHB* PEELFIJLBEA; // 0x40
	::FGCOIBFFCHB* IAOCBIHABLH; // 0x48
	::UnityEngine::RectTransform* DJJPHLNDJDB; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* PPPNOAPFDMN; // 0x58
	::FGCOIBFFCHB* ONOMHHPONHB; // 0x60
	::UnityEngine::RectTransform* JJBENHEPGAO; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* DCDNEMMDAHE; // 0x70
	::LGINJIKKBJA* DNGFGABBHEG; // 0x78
	::LGINJIKKBJA* GOMNOMJALIE; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x88
	::FGCOIBFFCHB* EADEDJBCBCD; // 0x90
	::UnityEngine::RectTransform* JHKLHDMLPDK; // 0x98
	::GCIMMDDIFBJ* NIJMIHAPEEI; // 0xA0
	::FGCOIBFFCHB* OBGHDJOAONK; // 0xA8
	::GCIMMDDIFBJ* FCOCNDLFIKE; // 0xB0
	::FGCOIBFFCHB* DONFGCAAPKG; // 0xB8
	::UnityEngine::RectTransform* NMBDIALHDKN; // 0xC0
	::MoleMole::MonoGamepadModule* GDEEPNOOCFH; // 0xC8
	::FGCOIBFFCHB* AAICEELJIIB; // 0xD0
	::GCIMMDDIFBJ* IALGPOMINEL; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMDHCLPFJA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFMDHCLPFJA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMDHCLPFJA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFMDHCLPFJA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
