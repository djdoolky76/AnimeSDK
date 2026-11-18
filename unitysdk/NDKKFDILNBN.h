#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define NDKKFDILNBN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x105AE0E0)
#define NDKKFDILNBN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x105AE050)
#define NDKKFDILNBN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x105ADED0)
#define NDKKFDILNBN__CTOR_OFFSET UNITYSDK_OFFSET(0x105AE0D0)

inline static constexpr unsigned int NDKKFDILNBN_TypeDefinitionIndex = 55007;

class NDKKFDILNBN : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* JBCLMABGEEN; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* NPCIPCPJEMF; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* EECNGIOCGMB; // 0x28
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* IKKGKCBIIPP; // 0x38
	::UnityEngine::RectTransform* LNMNOBJPLHH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKKFDILNBN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDKKFDILNBN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDKKFDILNBN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKKFDILNBN_KGEBDLGBGNM_OFFSET))(this);
	}
};
