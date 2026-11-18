#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHollowCardOptionItemWidgetController; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
template <typename T> class MEKABAIJMNM_1;

#define GNDMLPDMGDB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D05E30)
#define GNDMLPDMGDB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14D05D60)
#define GNDMLPDMGDB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D05BC0)
#define GNDMLPDMGDB__CTOR_OFFSET UNITYSDK_OFFSET(0x14D05E20)

inline static constexpr unsigned int GNDMLPDMGDB_TypeDefinitionIndex = 87954;

class GNDMLPDMGDB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* JMHIGHNGDCL; // 0x18
	::UnityEngine::RectTransform* BDEGEIMEGGN; // 0x20
	::UnityEngine::RectTransform* DFFJPMJAJPE; // 0x28
	::UnityEngine::CanvasGroup* DJNJOOHMJNN; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIHollowCardOptionItemWidgetController*>* NMIJMIBNMIC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDMLPDMGDB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GNDMLPDMGDB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDMLPDMGDB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GNDMLPDMGDB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
