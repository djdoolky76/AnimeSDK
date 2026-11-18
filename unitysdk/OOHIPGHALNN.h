#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define OOHIPGHALNN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1551F680)
#define OOHIPGHALNN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1551F580)
#define OOHIPGHALNN_LNNBEGNDOHL_OFFSET UNITYSDK_OFFSET(0x1551F380)
#define OOHIPGHALNN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1551F150)
#define OOHIPGHALNN__CTOR_OFFSET UNITYSDK_OFFSET(0x1551F660)

inline static constexpr unsigned int OOHIPGHALNN_TypeDefinitionIndex = 91733;

class OOHIPGHALNN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJKGELGDKDP; // 0x18
	::UnityEngine::Animation* DHCKPIBEKNB; // 0x20
	::LGINJIKKBJA* EDOEMEEOLDF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BCICLODOJIM; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::UnityEngine::UI::Extension::UITabButtonGroup* CKBCJBHOOLM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* OAKAKLLNPHO; // 0x48
	::UnityEngine::UI::Extension::UITimeWidget* NHLGGAGEJND; // 0x50
	::System::Collections::Generic::List_1<::System::Object*>* FJPCAHJIAGA; // 0x58
	::LGINJIKKBJA* DKIDPMCNGOM; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHIPGHALNN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OOHIPGHALNN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHIPGHALNN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Object*>* LNNBEGNDOHL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OOHIPGHALNN_LNNBEGNDOHL_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OOHIPGHALNN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
