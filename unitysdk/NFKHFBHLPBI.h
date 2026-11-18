#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NFKHFBHLPBI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x105B60D0)
#define NFKHFBHLPBI_HFMNHAIMMFN_OFFSET UNITYSDK_OFFSET(0x105B5ED0)
#define NFKHFBHLPBI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x105B6020)
#define NFKHFBHLPBI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x105B5CF0)
#define NFKHFBHLPBI__CTOR_OFFSET UNITYSDK_OFFSET(0x105B60C0)

inline static constexpr unsigned int NFKHFBHLPBI_TypeDefinitionIndex = 83885;

class NFKHFBHLPBI : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* DIIPMAFJFDP; // 0x18
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x20
	::UnityEngine::GameObject* DMEECNMBLNF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* IBENJFBEHBE; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* MLHHNKHKFAE; // 0x38
	::UnityEngine::GameObject* BBKPIJFOMFO; // 0x40
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKHFBHLPBI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFKHFBHLPBI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKHFBHLPBI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFKHFBHLPBI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* HFMNHAIMMFN(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFKHFBHLPBI_HFMNHAIMMFN_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
