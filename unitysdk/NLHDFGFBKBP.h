#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define NLHDFGFBKBP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x137692D0)
#define NLHDFGFBKBP_GGJOLEMJECB_OFFSET UNITYSDK_OFFSET(0x13768FF0)
#define NLHDFGFBKBP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x137691D0)
#define NLHDFGFBKBP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13768D40)
#define NLHDFGFBKBP__CTOR_OFFSET UNITYSDK_OFFSET(0x137692C0)

inline static constexpr unsigned int NLHDFGFBKBP_TypeDefinitionIndex = 88731;

class NLHDFGFBKBP : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MAIBDADFDBE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JLEJEPEDOGG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x30
	::LGINJIKKBJA* DNGFGABBHEG; // 0x38
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* CKBGOOIPHPO; // 0x40
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x48
	::UnityEngine::UI::Extension::UITimeWidget* BJEHKHOHCPE; // 0x50
	::LGINJIKKBJA* DEFJLEPDBON; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* MHBHFHBHCPB; // 0x60
	::MoleMole::NotificationBadge* LPLEFLENCMP; // 0x68
	::UnityEngine::RectTransform* AHKNHJKFDCH; // 0x70
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* NKAHNLPKMMP; // 0x80
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHDFGFBKBP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NLHDFGFBKBP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NLHDFGFBKBP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHDFGFBKBP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* GGJOLEMJECB(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::FGCOIBFFCHB*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NLHDFGFBKBP_GGJOLEMJECB_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
