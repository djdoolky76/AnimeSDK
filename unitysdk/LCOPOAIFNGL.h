#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LCOPOAIFNGL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x151800E0)
#define LCOPOAIFNGL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15180030)
#define LCOPOAIFNGL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1517FE60)
#define LCOPOAIFNGL__CTOR_OFFSET UNITYSDK_OFFSET(0x151800D0)

inline static constexpr unsigned int LCOPOAIFNGL_TypeDefinitionIndex = 66895;

class LCOPOAIFNGL : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* PMBLECALCKB; // 0x18
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x28
	::LGINJIKKBJA* DPMCKGCCHKB; // 0x30
	::UnityEngine::RectTransform* KKNNBNKPFHH; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* EHMLMJKEJMM; // 0x40
	::UnityEngine::RectTransform* IJLCFNIBMLP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOPOAIFNGL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCOPOAIFNGL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOPOAIFNGL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCOPOAIFNGL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
