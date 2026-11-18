#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define LAMELHDDIGI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x158066C0)
#define LAMELHDDIGI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15806580)
#define LAMELHDDIGI_LFENMPGNFIG_OFFSET UNITYSDK_OFFSET(0x15806390)
#define LAMELHDDIGI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15806100)
#define LAMELHDDIGI__CTOR_OFFSET UNITYSDK_OFFSET(0x158066B0)

inline static constexpr unsigned int LAMELHDDIGI_TypeDefinitionIndex = 60580;

class LAMELHDDIGI : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* PLPMCNAOCMB; // 0x18
	::MoleMole::MonoGamepadCustomList* IHGNFKCAJBE; // 0x20
	::LGINJIKKBJA* ICNIHACFEEN; // 0x28
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* BHDPMENJCAH; // 0x30
	::FGCOIBFFCHB* HLCDLFHMHDF; // 0x38
	::UnityEngine::RectTransform* DBJCNKCCNKC; // 0x40
	::LGINJIKKBJA* PMBLECALCKB; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x50
	::LGINJIKKBJA* MEAEJAHIEGD; // 0x58
	::FGCOIBFFCHB* NMNMCIGILJN; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMELHDDIGI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LAMELHDDIGI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* LFENMPGNFIG(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LAMELHDDIGI_LFENMPGNFIG_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LAMELHDDIGI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMELHDDIGI_KGEBDLGBGNM_OFFSET))(this);
	}
};
