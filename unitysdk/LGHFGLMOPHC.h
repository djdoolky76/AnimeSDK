#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIZenkovResultDataStartWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define LGHFGLMOPHC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x126DA630)
#define LGHFGLMOPHC_KANGAJIMFJC_OFFSET UNITYSDK_OFFSET(0x126DA400)
#define LGHFGLMOPHC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x126DA5E0)
#define LGHFGLMOPHC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x126DA270)
#define LGHFGLMOPHC__CTOR_OFFSET UNITYSDK_OFFSET(0x126DA620)

inline static constexpr unsigned int LGHFGLMOPHC_TypeDefinitionIndex = 89500;

class LGHFGLMOPHC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x18
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x20
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIZenkovResultDataStartWidgetController*>*>* IJGBDGOFGNK; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHFGLMOPHC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LGHFGLMOPHC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LGHFGLMOPHC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIZenkovResultDataStartWidgetController*>*>* KANGAJIMFJC(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIZenkovResultDataStartWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LGHFGLMOPHC_KANGAJIMFJC_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHFGLMOPHC_KGEBDLGBGNM_OFFSET))(this);
	}
};
