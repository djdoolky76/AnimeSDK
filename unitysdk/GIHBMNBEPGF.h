#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define GIHBMNBEPGF_ABLKIMOLLDH_OFFSET UNITYSDK_OFFSET(0x15F22540)
#define GIHBMNBEPGF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F22810)
#define GIHBMNBEPGF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15F22720)
#define GIHBMNBEPGF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F22340)
#define GIHBMNBEPGF__CTOR_OFFSET UNITYSDK_OFFSET(0x15F22800)

inline static constexpr unsigned int GIHBMNBEPGF_TypeDefinitionIndex = 50332;

class GIHBMNBEPGF : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIGeneralHeadRowWidgetController*>*>* BHEGMBJDLDF; // 0x18
	::UnityEngine::RectTransform* AEGAPMOGAIO; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* LMCKPPBCOEK; // 0x28
	::MonoUITableScrollV2* EJLNKAEKMOE; // 0x30
	::LGINJIKKBJA* NKMMJEPMCGF; // 0x38
	::MonoUITableScrollV2* HLLOIAIDJEF; // 0x40
	::FGCOIBFFCHB* LANCCMNPFLA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHBMNBEPGF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIHBMNBEPGF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIGeneralHeadRowWidgetController*>*>* ABLKIMOLLDH(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIGeneralHeadRowWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIHBMNBEPGF_ABLKIMOLLDH_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHBMNBEPGF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIHBMNBEPGF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
