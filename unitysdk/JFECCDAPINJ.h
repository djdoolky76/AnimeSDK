#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JFECCDAPINJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13CAFC10)
#define JFECCDAPINJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13CAFAD0)
#define JFECCDAPINJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13CAF7D0)
#define JFECCDAPINJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13CAFC00)

inline static constexpr unsigned int JFECCDAPINJ_TypeDefinitionIndex = 77692;

class JFECCDAPINJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* NHFGBLBKOMF; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::FGCOIBFFCHB* BHADAIOAPGN; // 0x30
	::UnityEngine::RectTransform* FCNPIMGOBFF; // 0x38
	::FGCOIBFFCHB* FBLHLNGOLCD; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* JKEBGCGDHBC; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* GNCNOCJBDHD; // 0x50
	::LGINJIKKBJA* AHNKDCNFAFJ; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* DCDNEMMDAHE; // 0x60
	::FGCOIBFFCHB* KIJIGONCGDE; // 0x68
	::GCIMMDDIFBJ* OGBGPGKNJKD; // 0x70
	::UnityEngine::Transform* MBKACMJJMBH; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* NDIOKAFPKCC; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFECCDAPINJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JFECCDAPINJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFECCDAPINJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JFECCDAPINJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
