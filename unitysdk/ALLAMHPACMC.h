#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define ALLAMHPACMC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D07910)
#define ALLAMHPACMC_HNBGMBJHHBM_OFFSET UNITYSDK_OFFSET(0x12D07620)
#define ALLAMHPACMC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D07810)
#define ALLAMHPACMC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D07400)
#define ALLAMHPACMC__CTOR_OFFSET UNITYSDK_OFFSET(0x12D07900)

inline static constexpr unsigned int ALLAMHPACMC_TypeDefinitionIndex = 71508;

class ALLAMHPACMC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x18
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* BGABIOBEPBN; // 0x20
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x28
	::FGCOIBFFCHB* OAKLOCDAFEE; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::FGCOIBFFCHB* MFLMJLBNEJK; // 0x40
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* HDFFCAEFPLD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLAMHPACMC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ALLAMHPACMC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* HNBGMBJHHBM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ALLAMHPACMC_HNBGMBJHHBM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLAMHPACMC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ALLAMHPACMC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
