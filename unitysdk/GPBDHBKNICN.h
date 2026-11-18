#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GPBDHBKNICN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19DE9370)
#define GPBDHBKNICN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19DE9180)
#define GPBDHBKNICN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19DE8E60)
#define GPBDHBKNICN__CTOR_OFFSET UNITYSDK_OFFSET(0x19DE9360)

inline static constexpr unsigned int GPBDHBKNICN_TypeDefinitionIndex = 68037;

class GPBDHBKNICN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KBGIAIHCEPL; // 0x18
	::FGCOIBFFCHB* MNHOFEMCLNH; // 0x20
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x28
	::FGCOIBFFCHB* PBBHIOABJLP; // 0x30
	::FGCOIBFFCHB* LMEGBBDFBMM; // 0x38
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x40
	::UnityEngine::GameObject* KKMCLPDAJKJ; // 0x48
	::FGCOIBFFCHB* IMDLHCPGEDN; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* MBMLKIGNCED; // 0x58
	::FGCOIBFFCHB* CBAOEHJOIJO; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x68
	::UnityEngine::GameObject* DKMMLHHHHBK; // 0x70
	::FGCOIBFFCHB* ANBLGKBBIKI; // 0x78
	::LGINJIKKBJA* PMBLECALCKB; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* CODBMJMMBKA; // 0x88
	::LGINJIKKBJA* CAHPNFMBIDB; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPBDHBKNICN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GPBDHBKNICN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPBDHBKNICN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GPBDHBKNICN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
