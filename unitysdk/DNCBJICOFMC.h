#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define DNCBJICOFMC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1587CB00)
#define DNCBJICOFMC_KANGAJIMFJC_OFFSET UNITYSDK_OFFSET(0x1587C810)
#define DNCBJICOFMC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1587CA00)
#define DNCBJICOFMC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1587C570)
#define DNCBJICOFMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1587CAF0)

inline static constexpr unsigned int DNCBJICOFMC_TypeDefinitionIndex = 59971;

class DNCBJICOFMC : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* KJABPDDDHGK; // 0x18
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* IJGBDGOFGNK; // 0x20
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* IDILOMIELFG; // 0x28
	::FGCOIBFFCHB* HHDADDLIPAG; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* NJOCLMNKHOD; // 0x38
	::FGCOIBFFCHB* GEMOBBCBCPE; // 0x40
	::LGINJIKKBJA* EDIPODAJNEM; // 0x48
	::UnityEngine::RectTransform* OGDHHANGGIG; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* HFKDLEMOILD; // 0x58
	::UnityEngine::GameObject* FJGPOOLCOEP; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* HDJPMKNLDBC; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCBJICOFMC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNCBJICOFMC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* KANGAJIMFJC(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNCBJICOFMC_KANGAJIMFJC_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCBJICOFMC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNCBJICOFMC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
