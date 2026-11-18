#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IJABLFGDFBK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14A264E0)
#define IJABLFGDFBK_IKMKFINGACM_OFFSET UNITYSDK_OFFSET(0x14A262E0)
#define IJABLFGDFBK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14A26430)
#define IJABLFGDFBK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14A26040)
#define IJABLFGDFBK__CTOR_OFFSET UNITYSDK_OFFSET(0x14A264D0)

inline static constexpr unsigned int IJABLFGDFBK_TypeDefinitionIndex = 90100;

class IJABLFGDFBK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* FJPFKBONFHH; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::UnityEngine::GameObject* CMAGJNKJLIH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* PJDCKHPOIOD; // 0x30
	::MonoUITableScrollV2* BECEFGJMGPE; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* NPJCEKLAHJL; // 0x40
	::UnityEngine::GameObject* OCPFFNKLFKP; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* EHFACLMBADA; // 0x50
	::UnityEngine::UI::VerticalLayoutGroup* GONIKKNDPCL; // 0x58
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x60
	::UnityEngine::UI::LayoutElement* CGAEFJBHDCF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJABLFGDFBK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJABLFGDFBK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJABLFGDFBK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJABLFGDFBK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* IKMKFINGACM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJABLFGDFBK_IKMKFINGACM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
