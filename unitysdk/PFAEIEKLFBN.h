#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PFAEIEKLFBN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFDAB080)
#define PFAEIEKLFBN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xFDAAFB0)
#define PFAEIEKLFBN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFDAACF0)
#define PFAEIEKLFBN__CTOR_OFFSET UNITYSDK_OFFSET(0xFDAB070)

inline static constexpr unsigned int PFAEIEKLFBN_TypeDefinitionIndex = 74695;

class PFAEIEKLFBN : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* MCOPAFKDHDG; // 0x18
	::FGCOIBFFCHB* GOLCGMBGAEP; // 0x20
	::FILNFMCNCFE* AIELIJOMCHN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* EOANIIFIHAK; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* OFHOLJOCJOE; // 0x38
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* EGJPKMNMKOC; // 0x40
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* CDLAOBKDNLI; // 0x50
	::GCIMMDDIFBJ* EHMLMJKEJMM; // 0x58
	::UnityEngine::RectTransform* COPKFNAFGME; // 0x60
	::GCIMMDDIFBJ* DFDPPFEPDNO; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAEIEKLFBN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PFAEIEKLFBN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PFAEIEKLFBN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAEIEKLFBN_KGEBDLGBGNM_OFFSET))(this);
	}
};
