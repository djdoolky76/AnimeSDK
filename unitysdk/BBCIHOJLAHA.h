#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define BBCIHOJLAHA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1267AEC0)
#define BBCIHOJLAHA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1267ADC0)
#define BBCIHOJLAHA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1267AB70)
#define BBCIHOJLAHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1267AEB0)

inline static constexpr unsigned int BBCIHOJLAHA_TypeDefinitionIndex = 40441;

class BBCIHOJLAHA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x18
	::FGCOIBFFCHB* HPHCLAMDGBO; // 0x20
	::UnityEngine::RectTransform* EIOOGBJABHD; // 0x28
	::UnityEngine::UI::Extension::UITabButton* OEPAJHOAAAI; // 0x30
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x38
	::UnityEngine::RectTransform* PHFOGPCBGOG; // 0x40
	::FGCOIBFFCHB* MELNPLOJOPK; // 0x48
	::UnityEngine::RectTransform* FPFDCJFIDON; // 0x50
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x58
	::FGCOIBFFCHB* CCGOPBMAGHG; // 0x60
	::UnityEngine::RectTransform* PHPDAPFIOKO; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCIHOJLAHA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBCIHOJLAHA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCIHOJLAHA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBCIHOJLAHA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
