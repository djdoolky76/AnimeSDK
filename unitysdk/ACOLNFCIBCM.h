#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ACOLNFCIBCM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x144BD890)
#define ACOLNFCIBCM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x144BD6F0)
#define ACOLNFCIBCM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x144BD3C0)
#define ACOLNFCIBCM__CTOR_OFFSET UNITYSDK_OFFSET(0x144BD880)

inline static constexpr unsigned int ACOLNFCIBCM_TypeDefinitionIndex = 51398;

class ACOLNFCIBCM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* ICKJBMJCLGH; // 0x18
	::UnityEngine::RectTransform* NPAEOHNPKMP; // 0x20
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x28
	::FGCOIBFFCHB* HNEPADLEPHD; // 0x30
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x38
	::FGCOIBFFCHB* MKONCKEAGKD; // 0x40
	::UnityEngine::Animation* CMCAKLMEKMP; // 0x48
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x50
	::UnityEngine::RectTransform* OIMHELLGFKE; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* LKIHDIDNCJL; // 0x60
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x68
	::FGCOIBFFCHB* NHIBKLGIELD; // 0x70
	::FGCOIBFFCHB* MJEONFDJEEA; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* PBBPJNPCIEK; // 0x80
	::UnityEngine::RectTransform* FNMDICKEGCJ; // 0x88
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* PGCMEPIDIFC; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOLNFCIBCM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ACOLNFCIBCM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ACOLNFCIBCM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOLNFCIBCM_KGEBDLGBGNM_OFFSET))(this);
	}
};
