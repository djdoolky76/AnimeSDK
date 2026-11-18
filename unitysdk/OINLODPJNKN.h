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

#define OINLODPJNKN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C1A3C0)
#define OINLODPJNKN_HHEBMEGNDBL_OFFSET UNITYSDK_OFFSET(0x16C1A120)
#define OINLODPJNKN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16C1A310)
#define OINLODPJNKN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C19F70)
#define OINLODPJNKN__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1A3B0)

inline static constexpr unsigned int OINLODPJNKN_TypeDefinitionIndex = 74952;

class OINLODPJNKN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* ELDFMMFHIFH; // 0x18
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* GNBCFDKMCIL; // 0x20
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OFGMBMIEGMF; // 0x30
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINLODPJNKN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OINLODPJNKN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* HHEBMEGNDBL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OINLODPJNKN_HHEBMEGNDBL_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINLODPJNKN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OINLODPJNKN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
