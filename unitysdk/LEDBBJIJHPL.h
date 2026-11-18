#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class AudioLineEffect;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILinearProgressBar; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LEDBBJIJHPL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19987F70)
#define LEDBBJIJHPL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19987C10)
#define LEDBBJIJHPL_PMLBECDCBFJ_OFFSET UNITYSDK_OFFSET(0x19987E10)
#define LEDBBJIJHPL__CTOR_OFFSET UNITYSDK_OFFSET(0x19987F60)

inline static constexpr unsigned int LEDBBJIJHPL_TypeDefinitionIndex = 42482;

class LEDBBJIJHPL : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* KHOJKFHFKIJ; // 0x18
	::UnityEngine::UI::Extension::UILinearProgressBar* OBEMLOACGAF; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x28
	::UnityEngine::RectTransform* PHGKBHJDNKN; // 0x30
	::UnityEngine::RectTransform* FCDODNBLEEO; // 0x38
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* AHAPLFAGPDL; // 0x40
	::UnityEngine::GameObject* OJGFMMHOGMN; // 0x48
	::MoleMole::UIGeneralButtonController* NBFCNDIFJHF; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* FOLFNLAKDCH; // 0x58
	::UnityEngine::RectTransform* EBMGMCNGMBD; // 0x60
	::UnityEngine::RectTransform* CJLPHOAMABB; // 0x68
	::UnityEngine::RectTransform* JLLJPNMPKJA; // 0x70
	::AudioLineEffect* PLEOOPOLGIG; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDBBJIJHPL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LEDBBJIJHPL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LEDBBJIJHPL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* PMLBECDCBFJ(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LEDBBJIJHPL_PMLBECDCBFJ_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
