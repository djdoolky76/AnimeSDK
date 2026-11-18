#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWishlistSkillItemWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define DKFACPMMDIA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x7FC1B50)
#define DKFACPMMDIA_GHHPNIKGKIA_OFFSET UNITYSDK_OFFSET(0x7FC18A0)
#define DKFACPMMDIA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x7FC1A80)
#define DKFACPMMDIA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x7FC1690)
#define DKFACPMMDIA__CTOR_OFFSET UNITYSDK_OFFSET(0x7FC1B40)

inline static constexpr unsigned int DKFACPMMDIA_TypeDefinitionIndex = 57574;

class DKFACPMMDIA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KGNEFGEKIEA; // 0x18
	::LGINJIKKBJA* OKGBOAENDNC; // 0x20
	::UnityEngine::GameObject* OANJIEFOEOF; // 0x28
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIWishlistSkillItemWidgetController*>*>* HBHNPKPPKFE; // 0x30
	::LGINJIKKBJA* GPJIEHCKFMB; // 0x38
	::UnityEngine::GameObject* GDLCCFGKNBD; // 0x40
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFACPMMDIA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DKFACPMMDIA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFACPMMDIA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DKFACPMMDIA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIWishlistSkillItemWidgetController*>*>* GHHPNIKGKIA(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIWishlistSkillItemWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DKFACPMMDIA_GHHPNIKGKIA_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
