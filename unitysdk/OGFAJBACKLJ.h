#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define OGFAJBACKLJ_BOPOHJDKLBF_OFFSET UNITYSDK_OFFSET(0x15FDD550)
#define OGFAJBACKLJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15FDD7A0)
#define OGFAJBACKLJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15FDD6A0)
#define OGFAJBACKLJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15FDD290)
#define OGFAJBACKLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDD790)

inline static constexpr unsigned int OGFAJBACKLJ_TypeDefinitionIndex = 53671;

class OGFAJBACKLJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITabButtonGroup* FAGMEMGEGFP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* EHMLMJKEJMM; // 0x20
	::LGINJIKKBJA* KCDKLGHONGD; // 0x28
	::LGINJIKKBJA* DFBHDHOKJEK; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* NDPJMAAMECC; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AJLGLNMLFMM; // 0x40
	::LGINJIKKBJA* BCPJHNGIAKL; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HFHJMKDAMCN; // 0x50
	::UnityEngine::GameObject* LINENNBIDPE; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* PGBPGNMAMJL; // 0x60
	::FGCOIBFFCHB* JGAHJDAHAFC; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FAEOKOOOBBP; // 0x70
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFAJBACKLJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OGFAJBACKLJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* BOPOHJDKLBF(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OGFAJBACKLJ_BOPOHJDKLBF_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFAJBACKLJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OGFAJBACKLJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
