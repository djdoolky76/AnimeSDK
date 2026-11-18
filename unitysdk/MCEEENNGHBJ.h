#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MCEEENNGHBJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x151BFAC0)
#define MCEEENNGHBJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x151BF9C0)
#define MCEEENNGHBJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x151BF770)
#define MCEEENNGHBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x151BFAB0)

inline static constexpr unsigned int MCEEENNGHBJ_TypeDefinitionIndex = 58604;

class MCEEENNGHBJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* GANJOPGHALM; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* LGLAODPABIL; // 0x20
	::FGCOIBFFCHB* KAPIIGNLBDG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* ADFDBHFPGDO; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* CLPCLFDJOHN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HIIFPFJJPBA; // 0x40
	::LGINJIKKBJA* MJCAABAHNPP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* NKCGEIAKNLJ; // 0x50
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x58
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEEENNGHBJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCEEENNGHBJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEEENNGHBJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCEEENNGHBJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
