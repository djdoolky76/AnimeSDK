#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIBackFlowActivitySelectAvatarWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define JNPBIHJBLKB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1946E140)
#define JNPBIHJBLKB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1946E070)
#define JNPBIHJBLKB_LCBFKMEAFAB_OFFSET UNITYSDK_OFFSET(0x1946DE90)
#define JNPBIHJBLKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1946DC80)
#define JNPBIHJBLKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1946E130)

inline static constexpr unsigned int JNPBIHJBLKB_TypeDefinitionIndex = 59059;

class JNPBIHJBLKB : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadCustomList* GOJBIKCLNIL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GANJOPGHALM; // 0x20
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIBackFlowActivitySelectAvatarWidgetController*>*>* BAJFCGGEDGO; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* NNBGIBBJLBE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AIONHELBGBC; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* FAAGKLIILAH; // 0x40
	::FGCOIBFFCHB* NIGCIPNLDJJ; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* LHFBNKOPGJO; // 0x50
	::UnityEngine::Animation* DIKIHNFAFNJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPBIHJBLKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JNPBIHJBLKB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JNPBIHJBLKB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPBIHJBLKB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIBackFlowActivitySelectAvatarWidgetController*>*>* LCBFKMEAFAB(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIBackFlowActivitySelectAvatarWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JNPBIHJBLKB_LCBFKMEAFAB_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
