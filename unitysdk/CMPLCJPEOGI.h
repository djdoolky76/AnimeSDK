#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CMPLCJPEOGI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x145D8350)
#define CMPLCJPEOGI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x145D81C0)
#define CMPLCJPEOGI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x145D7EE0)
#define CMPLCJPEOGI__CTOR_OFFSET UNITYSDK_OFFSET(0x145D8340)

inline static constexpr unsigned int CMPLCJPEOGI_TypeDefinitionIndex = 83337;

class CMPLCJPEOGI : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CGMKPEOLGML; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MLPINIOLOBM; // 0x20
	::UnityEngine::RectTransform* AKOOODAFGAA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MGBNPBBAPFE; // 0x30
	::FGCOIBFFCHB* IBKKKOCOFPL; // 0x38
	::UnityEngine::RectTransform* PPJKENAFHHH; // 0x40
	::FGCOIBFFCHB* KCKPHGDFOBC; // 0x48
	::FGCOIBFFCHB* FKBMPFPBBPD; // 0x50
	::UnityEngine::GameObject* KIEAMBKCLHD; // 0x58
	::LGINJIKKBJA* KEMJHCLLAMH; // 0x60
	::FGCOIBFFCHB* DEAPLILJLJD; // 0x68
	::UnityEngine::RectTransform* MEEMILMJOIG; // 0x70
	::FGCOIBFFCHB* HFINGBFBEMA; // 0x78
	::FGCOIBFFCHB* IAOCBIHABLH; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPLCJPEOGI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMPLCJPEOGI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPLCJPEOGI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMPLCJPEOGI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
