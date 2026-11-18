#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIVHSPlayerRoleWidgetController; }
namespace UnityEngine { class CanvasGroup; }
template <typename T> class MEKABAIJMNM_1;

#define OIJNBGOKADF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B79DD80)
#define OIJNBGOKADF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1B79DCB0)
#define OIJNBGOKADF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B79DB60)
#define OIJNBGOKADF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B79DD70)

inline static constexpr unsigned int OIJNBGOKADF_TypeDefinitionIndex = 69812;

class OIJNBGOKADF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* NPDLNNMLBAM; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIVHSPlayerRoleWidgetController*>* HFHACFENKLE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJNBGOKADF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIJNBGOKADF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIJNBGOKADF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJNBGOKADF_KGEBDLGBGNM_OFFSET))(this);
	}
};
