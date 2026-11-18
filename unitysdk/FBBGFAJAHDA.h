#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FBBGFAJAHDA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14282F30)
#define FBBGFAJAHDA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14282D70)
#define FBBGFAJAHDA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14282AA0)
#define FBBGFAJAHDA__CTOR_OFFSET UNITYSDK_OFFSET(0x14282F20)

inline static constexpr unsigned int FBBGFAJAHDA_TypeDefinitionIndex = 69042;

class FBBGFAJAHDA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BPNMFHPBFFG; // 0x18
	::FGCOIBFFCHB* GJCOLFGEBKH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* OAKAIIJLMIL; // 0x28
	::FGCOIBFFCHB* MCGPPADHCLJ; // 0x30
	::FGCOIBFFCHB* ANAEFBINODG; // 0x38
	::LGINJIKKBJA* NPHPKPAPBNF; // 0x40
	::UnityEngine::Animation* FCAPGILOFFL; // 0x48
	::FGCOIBFFCHB* DFLNOAPEMPF; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* MFKBCHAJOGK; // 0x58
	::FGCOIBFFCHB* OHPDGPEPFIE; // 0x60
	::MoleMole::NotificationBadgeEx* DDAEJLBFBJH; // 0x68
	::FGCOIBFFCHB* MPFDMAPAHOO; // 0x70
	::UnityEngine::Animation* DPDOFDHIBCP; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBGFAJAHDA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBBGFAJAHDA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBBGFAJAHDA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBGFAJAHDA_KGEBDLGBGNM_OFFSET))(this);
	}
};
