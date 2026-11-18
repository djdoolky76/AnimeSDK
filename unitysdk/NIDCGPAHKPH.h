#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NIDCGPAHKPH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE581930)
#define NIDCGPAHKPH_GLMBLIPMHPK_OFFSET UNITYSDK_OFFSET(0xE581660)
#define NIDCGPAHKPH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE5817B0)
#define NIDCGPAHKPH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE5813B0)
#define NIDCGPAHKPH__CTOR_OFFSET UNITYSDK_OFFSET(0xE581920)

inline static constexpr unsigned int NIDCGPAHKPH_TypeDefinitionIndex = 69762;

class NIDCGPAHKPH : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::LGINJIKKBJA* OGJKPCLDAIE; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* BAPALCDICOJ; // 0x28
	::UnityEngine::Transform* NKNJMNBFFJC; // 0x30
	::LGINJIKKBJA* MEMALNDGJDH; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* ICDEKAMPLNO; // 0x40
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* GBBHOACADHF; // 0x50
	::FGCOIBFFCHB* AJNHLFNINHE; // 0x58
	::UnityEngine::Transform* KJABPDDDHGK; // 0x60
	::LGINJIKKBJA* CEFBKCCMABN; // 0x68
	::FGCOIBFFCHB* NBJPMPGGONM; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDCGPAHKPH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIDCGPAHKPH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* GLMBLIPMHPK(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIDCGPAHKPH_GLMBLIPMHPK_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIDCGPAHKPH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDCGPAHKPH_KGEBDLGBGNM_OFFSET))(this);
	}
};
