#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define LHGLDAILENI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15DFD700)
#define LHGLDAILENI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15DFD610)
#define LHGLDAILENI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15DFD3D0)
#define LHGLDAILENI__CTOR_OFFSET UNITYSDK_OFFSET(0x15DFD6F0)

inline static constexpr unsigned int LHGLDAILENI_TypeDefinitionIndex = 41354;

class LHGLDAILENI : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x18
	::MonoUITableScrollV2* APABKAMAOCF; // 0x20
	::MonoUITableScrollV2* BPBFDIHHKAF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x30
	::UnityEngine::Animation* LNICJDEAJCA; // 0x38
	::UnityEngine::RectTransform* IAKICPMGKOD; // 0x40
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x48
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x58
	::UnityEngine::UI::Extension::UITabButtonGroup* FJPCAHJIAGA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHGLDAILENI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHGLDAILENI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHGLDAILENI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHGLDAILENI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
