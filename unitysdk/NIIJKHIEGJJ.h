#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NIIJKHIEGJJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE09E010)
#define NIIJKHIEGJJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE09DEA0)
#define NIIJKHIEGJJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE09DC00)
#define NIIJKHIEGJJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE09E000)

inline static constexpr unsigned int NIIJKHIEGJJ_TypeDefinitionIndex = 41661;

class NIIJKHIEGJJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x18
	::FGCOIBFFCHB* HLCDLFHMHDF; // 0x20
	::UnityEngine::RectTransform* LIDNNAFOGGA; // 0x28
	::FGCOIBFFCHB* BOLGDLNGBCF; // 0x30
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* FFOCJDFBCPB; // 0x50
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x58
	::FGCOIBFFCHB* CCGOPBMAGHG; // 0x60
	::UnityEngine::RectTransform* MOEPHLCOLJM; // 0x68
	::FGCOIBFFCHB* GNOLDKNDJAH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIIJKHIEGJJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIIJKHIEGJJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIIJKHIEGJJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIIJKHIEGJJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
