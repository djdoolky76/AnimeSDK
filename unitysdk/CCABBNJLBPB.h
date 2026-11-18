#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralPhaseProgressWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class MEKABAIJMNM_1;

#define CCABBNJLBPB_DDCFNPCCIFD_OFFSET UNITYSDK_OFFSET(0x145A8860)
#define CCABBNJLBPB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x145A8A60)
#define CCABBNJLBPB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x145A89B0)
#define CCABBNJLBPB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x145A8650)
#define CCABBNJLBPB__CTOR_OFFSET UNITYSDK_OFFSET(0x145A8A50)

inline static constexpr unsigned int CCABBNJLBPB_TypeDefinitionIndex = 61311;

class CCABBNJLBPB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MLKDGMJNGLL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* EKMJKJDAEEF; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIGeneralPhaseProgressWidgetController*>* MJMGANKGIFM; // 0x38
	::UnityEngine::RectTransform* NHAHMJOKDNP; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* HCNPPGKFMEK; // 0x48
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* AAHDCBNPPLL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCABBNJLBPB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CCABBNJLBPB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CCABBNJLBPB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCABBNJLBPB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* DDCFNPCCIFD(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CCABBNJLBPB_DDCFNPCCIFD_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
