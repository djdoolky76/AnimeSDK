#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define LJEHIDBHKEF_BNEOKKFJLLN_OFFSET UNITYSDK_OFFSET(0x12A5F570)
#define LJEHIDBHKEF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12A5F7F0)
#define LJEHIDBHKEF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12A5F760)
#define LJEHIDBHKEF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12A5F3C0)
#define LJEHIDBHKEF__CTOR_OFFSET UNITYSDK_OFFSET(0x12A5F7E0)

inline static constexpr unsigned int LJEHIDBHKEF_TypeDefinitionIndex = 58444;

class LJEHIDBHKEF : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NCIABHECDKO; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x28
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* IPPHMEHOLEE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* CDMKEFJNNGA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHIDBHKEF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJEHIDBHKEF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHIDBHKEF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJEHIDBHKEF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* BNEOKKFJLLN(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJEHIDBHKEF_BNEOKKFJLLN_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
