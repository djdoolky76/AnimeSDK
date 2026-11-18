#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GIAKJOMDBFE_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x10FDA5D0)
#define GIAKJOMDBFE_JLKGDOKBNPO_OFFSET UNITYSDK_OFFSET(0x10FDA7A0)
#define GIAKJOMDBFE_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x10FDA7B0)
#define GIAKJOMDBFE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10FDA350)
#define GIAKJOMDBFE_POBKHEPIJJF_OFFSET UNITYSDK_OFFSET(0x10FDA480)
#define GIAKJOMDBFE__CTOR_OFFSET UNITYSDK_OFFSET(0x10FDA710)

inline static constexpr unsigned int GIAKJOMDBFE_TypeDefinitionIndex = 52069;

class GIAKJOMDBFE : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* _LILAIFABPBK_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* FDOGGANACAP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAKJOMDBFE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIAKJOMDBFE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAKJOMDBFE_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void JLKGDOKBNPO(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + GIAKJOMDBFE_JLKGDOKBNPO_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::UILocalizationText* OEBELJGDNCE()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAKJOMDBFE_OEBELJGDNCE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* POBKHEPIJJF(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIAKJOMDBFE_POBKHEPIJJF_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
