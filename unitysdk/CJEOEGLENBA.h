#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoActivityResSetting; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CJEOEGLENBA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x145CCCB0)
#define CJEOEGLENBA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x145CCBA0)
#define CJEOEGLENBA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x145CC980)
#define CJEOEGLENBA__CTOR_OFFSET UNITYSDK_OFFSET(0x145CCCA0)

inline static constexpr unsigned int CJEOEGLENBA_TypeDefinitionIndex = 45262;

class CJEOEGLENBA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* ADDCLJCFOJC; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AJHAGPKPDGN; // 0x20
	::MoleMole::MonoActivityResSetting* BBOFHBBHMKJ; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* EIJIICLEGNI; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38
	::LGINJIKKBJA* GOMNOMJALIE; // 0x40
	::FGCOIBFFCHB* JLFCECFOPOO; // 0x48
	::LGINJIKKBJA* PPKPOIOFFDG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEOEGLENBA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJEOEGLENBA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJEOEGLENBA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEOEGLENBA_KGEBDLGBGNM_OFFSET))(this);
	}
};
