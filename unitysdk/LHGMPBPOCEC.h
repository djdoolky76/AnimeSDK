#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UITrendyStoreWeaponItemIconWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define LHGMPBPOCEC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1518A180)
#define LHGMPBPOCEC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1518A040)
#define LHGMPBPOCEC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15189DE0)
#define LHGMPBPOCEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1518A170)

inline static constexpr unsigned int LHGMPBPOCEC_TypeDefinitionIndex = 52620;

class LHGMPBPOCEC : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* EADDCKNAFGG; // 0x18
	::UnityEngine::RectTransform* HINIOKMBNNF; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28
	::FGCOIBFFCHB* POAMCMFAMFD; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UITrendyStoreWeaponItemIconWidgetController*>* LAELPMPJMHP; // 0x38
	::LGINJIKKBJA* DDPMCFOFMFA; // 0x40
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHGMPBPOCEC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHGMPBPOCEC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHGMPBPOCEC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHGMPBPOCEC_KGEBDLGBGNM_OFFSET))(this);
	}
};
