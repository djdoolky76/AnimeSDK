#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define AFMHLHPKFLL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11B92B10)
#define AFMHLHPKFLL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11B92A10)
#define AFMHLHPKFLL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11B927B0)
#define AFMHLHPKFLL__CTOR_OFFSET UNITYSDK_OFFSET(0x11B92B00)

inline static constexpr unsigned int AFMHLHPKFLL_TypeDefinitionIndex = 78283;

class AFMHLHPKFLL : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* EOHFNBLJPKO; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* POIOABJAIMH; // 0x28
	::FGCOIBFFCHB* IBAPFELBGGL; // 0x30
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x38
	::MonoUITableScrollV2* HALLMHJEAOA; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* IOBBIDNNCHH; // 0x48
	::UnityEngine::UI::Text* CKFAOJDHLLI; // 0x50
	::UnityEngine::GameObject* KFEJEMBBMNF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMHLHPKFLL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AFMHLHPKFLL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AFMHLHPKFLL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMHLHPKFLL_KGEBDLGBGNM_OFFSET))(this);
	}
};
