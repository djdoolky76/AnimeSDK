#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class BENMDGAAIFO;
class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class KNLFLMMHALL_1;

#define EBEGHDOJEMA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13E6F190)
#define EBEGHDOJEMA_EOLHMKJNCHA_OFFSET UNITYSDK_OFFSET(0x13E6EF00)
#define EBEGHDOJEMA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13E6F050)
#define EBEGHDOJEMA_NLADBGENDKK_OFFSET UNITYSDK_OFFSET(0x13E6ED10)
#define EBEGHDOJEMA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13E6EA30)
#define EBEGHDOJEMA__CTOR_OFFSET UNITYSDK_OFFSET(0x13E6F180)

inline static constexpr unsigned int EBEGHDOJEMA_TypeDefinitionIndex = 61244;

class EBEGHDOJEMA : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadTabButtonGroup* BIOBKBLDOBG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MFKBCHAJOGK; // 0x20
	::LGINJIKKBJA* OAJOHLMJPIE; // 0x28
	::KNLFLMMHALL_1<::BENMDGAAIFO*>* MHEEJCPCMAI; // 0x30
	::LGINJIKKBJA* BKDDKDMILCA; // 0x38
	::FGCOIBFFCHB* HAKAPPDJMPG; // 0x40
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* CNDKNEILKON; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* MCPMOLKJHEO; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::NotificationBadge*>* GCKHELDOJHL; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* JKKHCDICAIF; // 0x60
	::MonoUITableScrollV2* JPMIFIEFLIH; // 0x68
	::UnityEngine::UI::Extension::UITabButtonGroup* FJPCAHJIAGA; // 0x70
	::MoleMole::MonoGamepadModule* KLANNDLMMBO; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEGHDOJEMA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBEGHDOJEMA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBEGHDOJEMA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::MoleMole::NotificationBadge*>* EOLHMKJNCHA(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::NotificationBadge*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBEGHDOJEMA_EOLHMKJNCHA_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* NLADBGENDKK(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBEGHDOJEMA_NLADBGENDKK_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEGHDOJEMA_KGEBDLGBGNM_OFFSET))(this);
	}
};
