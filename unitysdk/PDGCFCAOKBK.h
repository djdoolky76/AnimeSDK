#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define PDGCFCAOKBK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x178B7480)
#define PDGCFCAOKBK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x178B73F0)
#define PDGCFCAOKBK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x178B7210)
#define PDGCFCAOKBK__CTOR_OFFSET UNITYSDK_OFFSET(0x178B7470)

inline static constexpr unsigned int PDGCFCAOKBK_TypeDefinitionIndex = 70791;

class PDGCFCAOKBK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* AEIMLEELOEG; // 0x18
	::GCIMMDDIFBJ* APANPPCMCHK; // 0x20
	::UnityEngine::RectTransform* OHDHJIPHEHM; // 0x28
	::UnityEngine::RectTransform* GEAIBCJOAFF; // 0x30
	::UnityEngine::RectTransform* JPEKEBGOPGB; // 0x38
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGCFCAOKBK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PDGCFCAOKBK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PDGCFCAOKBK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGCFCAOKBK_KGEBDLGBGNM_OFFSET))(this);
	}
};
