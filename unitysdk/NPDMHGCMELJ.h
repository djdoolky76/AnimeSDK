#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NPDMHGCMELJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE0DA770)
#define NPDMHGCMELJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE0DA650)
#define NPDMHGCMELJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE0DA400)
#define NPDMHGCMELJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE0DA760)

inline static constexpr unsigned int NPDMHGCMELJ_TypeDefinitionIndex = 45965;

class NPDMHGCMELJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CKHKPHBKAOJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x20
	::LGINJIKKBJA* IOKMAADCDAO; // 0x28
	::FGCOIBFFCHB* LEILLDMHMPC; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x40
	::FGCOIBFFCHB* BONLEIHNDBN; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* MLKKFBEOHIB; // 0x50
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDMHGCMELJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPDMHGCMELJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPDMHGCMELJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDMHGCMELJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
