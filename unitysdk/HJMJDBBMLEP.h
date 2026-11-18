#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HJMJDBBMLEP_AMJELPGMBJJ_OFFSET UNITYSDK_OFFSET(0x14952860)
#define HJMJDBBMLEP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14952B10)
#define HJMJDBBMLEP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x149529B0)
#define HJMJDBBMLEP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149525F0)
#define HJMJDBBMLEP__CTOR_OFFSET UNITYSDK_OFFSET(0x14952B00)

inline static constexpr unsigned int HJMJDBBMLEP_TypeDefinitionIndex = 59252;

class HJMJDBBMLEP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DOGHOAKHFHL; // 0x18
	::UnityEngine::RectTransform* DBJCNKCCNKC; // 0x20
	::UnityEngine::UI::Text* OCFLEGNCFIF; // 0x28
	::FGCOIBFFCHB* HLCDLFHMHDF; // 0x30
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* JOMNJHNCLIJ; // 0x40
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x48
	::LGINJIKKBJA* PLPMCNAOCMB; // 0x50
	::FGCOIBFFCHB* NMNMCIGILJN; // 0x58
	::MoleMole::MonoGamepadCustomList* IHGNFKCAJBE; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMJDBBMLEP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJMJDBBMLEP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMJDBBMLEP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJMJDBBMLEP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* AMJELPGMBJJ(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJMJDBBMLEP_AMJELPGMBJJ_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
