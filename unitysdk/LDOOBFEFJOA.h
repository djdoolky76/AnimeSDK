#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHandBookSuibianItemWidgetController; }
namespace MoleMole { class UIWishlistTargetAvatarPopupWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define LDOOBFEFJOA_CFCAMDGPMCJ_OFFSET UNITYSDK_OFFSET(0x19985A70)
#define LDOOBFEFJOA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19985D50)
#define LDOOBFEFJOA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19985C50)
#define LDOOBFEFJOA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x199857E0)
#define LDOOBFEFJOA__CTOR_OFFSET UNITYSDK_OFFSET(0x19985D40)

inline static constexpr unsigned int LDOOBFEFJOA_TypeDefinitionIndex = 44339;

class LDOOBFEFJOA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::UnityEngine::RectTransform* LLNLKIKBBMF; // 0x20
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIHandBookSuibianItemWidgetController*>*>* ODALDIOFMPH; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIWishlistTargetAvatarPopupWidgetController*>* BMDFIJOGIDG; // 0x30
	::UnityEngine::RectTransform* AHKNHJKFDCH; // 0x38
	::FGCOIBFFCHB* KJBINNHKCDC; // 0x40
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x48
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x50
	::LGINJIKKBJA* DEFJLEPDBON; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* BMJNDPGHPKE; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOOBFEFJOA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LDOOBFEFJOA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIHandBookSuibianItemWidgetController*>*>* CFCAMDGPMCJ(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIHandBookSuibianItemWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LDOOBFEFJOA_CFCAMDGPMCJ_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOOBFEFJOA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LDOOBFEFJOA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
