#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFashionStoreSellDetailWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define KMMIPKIDNOF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19965A40)
#define KMMIPKIDNOF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x199658E0)
#define KMMIPKIDNOF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19965670)
#define KMMIPKIDNOF__CTOR_OFFSET UNITYSDK_OFFSET(0x19965A30)

inline static constexpr unsigned int KMMIPKIDNOF_TypeDefinitionIndex = 42838;

class KMMIPKIDNOF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MLKKFBEOHIB; // 0x18
	::MonoUITableScrollV2* NAMJDGLNBPO; // 0x20
	::LGINJIKKBJA* LMNDFPAFFPF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* JLPDHJEMDGH; // 0x30
	::LGINJIKKBJA* CEFBKCCMABN; // 0x38
	::LGINJIKKBJA* BKDDKDMILCA; // 0x40
	::MoleMole::MonoGamepadNestedListDelegate* LDHIEBMJFJM; // 0x48
	::MEKABAIJMNM_1<::MoleMole::UIFashionStoreSellDetailWidgetController*>* LEHGKADGLAC; // 0x50
	::FGCOIBFFCHB* JBDJKCHKEDN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMIPKIDNOF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KMMIPKIDNOF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KMMIPKIDNOF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMIPKIDNOF_KGEBDLGBGNM_OFFSET))(this);
	}
};
