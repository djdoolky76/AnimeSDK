#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UICommonRewardItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class CBCLGFEGHLJ_1;

#define NDKBCAACLHB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10D70CA0)
#define NDKBCAACLHB_JMGPNHOEIOC_OFFSET UNITYSDK_OFFSET(0x10D70A10)
#define NDKBCAACLHB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10D70BF0)
#define NDKBCAACLHB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10D707D0)
#define NDKBCAACLHB__CTOR_OFFSET UNITYSDK_OFFSET(0x10D70C90)

inline static constexpr unsigned int NDKBCAACLHB_TypeDefinitionIndex = 72793;

class NDKBCAACLHB : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadSelectable* BIFNJFGLIFA; // 0x18
	::System::Collections::Generic::List_1<::CBCLGFEGHLJ_1<::MoleMole::UICommonRewardItemWidgetController*>*>* AAFACCEKIIO; // 0x20
	::MoleMole::MonoGamepadCustomList* AFDJNDDFBEA; // 0x28
	::System::Collections::Generic::List_1<::CBCLGFEGHLJ_1<::MoleMole::UICommonRewardItemWidgetController*>*>* JHAPFMJGDFO; // 0x30
	::UnityEngine::RectTransform* EJHNNMBHAPK; // 0x38
	::FGCOIBFFCHB* ANEEEIBEEPJ; // 0x40
	::UnityEngine::RectTransform* BPLHGDNBDFH; // 0x48
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x50
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKBCAACLHB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDKBCAACLHB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDKBCAACLHB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::CBCLGFEGHLJ_1<::MoleMole::UICommonRewardItemWidgetController*>*>* JMGPNHOEIOC(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::CBCLGFEGHLJ_1<::MoleMole::UICommonRewardItemWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDKBCAACLHB_JMGPNHOEIOC_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKBCAACLHB_KGEBDLGBGNM_OFFSET))(this);
	}
};
