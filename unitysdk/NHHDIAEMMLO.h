#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NHHDIAEMMLO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE75C490)
#define NHHDIAEMMLO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE75C350)
#define NHHDIAEMMLO_KPOFDHPABFN_OFFSET UNITYSDK_OFFSET(0xE75C170)
#define NHHDIAEMMLO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE75BF70)
#define NHHDIAEMMLO__CTOR_OFFSET UNITYSDK_OFFSET(0xE75C480)

inline static constexpr unsigned int NHHDIAEMMLO_TypeDefinitionIndex = 38572;

class NHHDIAEMMLO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x18
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* LKANANHIDKK; // 0x20
	::LGINJIKKBJA* JDDJCJDJMLP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x30
	::FGCOIBFFCHB* NIFNPDPDOIM; // 0x38
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHDIAEMMLO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHHDIAEMMLO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHDIAEMMLO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* KPOFDHPABFN(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::FGCOIBFFCHB*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHHDIAEMMLO_KPOFDHPABFN_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHHDIAEMMLO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
