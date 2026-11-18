#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoBPLevelAnimation; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DJDFPIMJELN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A1E4A90)
#define DJDFPIMJELN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A1E49A0)
#define DJDFPIMJELN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A1E4760)
#define DJDFPIMJELN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E4A80)

inline static constexpr unsigned int DJDFPIMJELN_TypeDefinitionIndex = 87071;

class DJDFPIMJELN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CKGBFOBGOAM; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x28
	::FGCOIBFFCHB* KKOJIGEFPBM; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* EPMEILNJMFF; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AADFALJMFCM; // 0x40
	::MoleMole::MonoBPLevelAnimation* GLGBIFINHCD; // 0x48
	::MoleMole::UIGeneralButtonController* EPHPOEEOMHE; // 0x50
	::LGINJIKKBJA* KBCLEFAKGHE; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDFPIMJELN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DJDFPIMJELN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DJDFPIMJELN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDFPIMJELN_KGEBDLGBGNM_OFFSET))(this);
	}
};
