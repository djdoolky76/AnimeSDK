#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIActivityCheckinFinalRewardWidgetController; }
namespace MoleMole { class UIActivityCheckinProgressBarWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define CEBPKIGJJBD_AHKANLDNAEM_OFFSET UNITYSDK_OFFSET(0x14F1EA90)
#define CEBPKIGJJBD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14F1EDC0)
#define CEBPKIGJJBD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14F1EC80)
#define CEBPKIGJJBD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F1E7D0)
#define CEBPKIGJJBD__CTOR_OFFSET UNITYSDK_OFFSET(0x14F1EDB0)

inline static constexpr unsigned int CEBPKIGJJBD_TypeDefinitionIndex = 57910;

class CEBPKIGJJBD : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FLCIAFHIIJK; // 0x18
	::FGCOIBFFCHB* HDAGFKFKFEM; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* MGBKOCKAHLI; // 0x28
	::UnityEngine::RectTransform* ODKGAHDFMAP; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIActivityCheckinFinalRewardWidgetController*>* BJAJCBNMNLD; // 0x38
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x40
	::LGINJIKKBJA* DGOGDNIHMHA; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* OKDFPHNHNFC; // 0x50
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* OOENDNEIFDO; // 0x58
	::MEKABAIJMNM_1<::MoleMole::UIActivityCheckinProgressBarWidgetController*>* MJMGANKGIFM; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBPKIGJJBD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CEBPKIGJJBD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBPKIGJJBD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* AHKANLDNAEM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CEBPKIGJJBD_AHKANLDNAEM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CEBPKIGJJBD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
