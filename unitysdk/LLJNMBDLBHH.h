#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define LLJNMBDLBHH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1EB5BCF0)
#define LLJNMBDLBHH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1EB5BC20)
#define LLJNMBDLBHH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EB5B9D0)
#define LLJNMBDLBHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5BCE0)

inline static constexpr unsigned int LLJNMBDLBHH_TypeDefinitionIndex = 94938;

class LLJNMBDLBHH : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* MFLEBPBJGLH; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIGeneralToggleWidgetController*>* NIENBJEFKAF; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::MoleMole::UIGeneralButtonController* CGOBDCLIIDH; // 0x30
	::UnityEngine::GameObject* KGOPPLHKFJI; // 0x38
	::MonoUITableScrollV2* PCAFNKOBAHG; // 0x40
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x48
	::LGINJIKKBJA* BKDDKDMILCA; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* EHMLMJKEJMM; // 0x58
	::UnityEngine::Transform* MCLGPCKJCIP; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJNMBDLBHH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LLJNMBDLBHH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJNMBDLBHH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LLJNMBDLBHH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
