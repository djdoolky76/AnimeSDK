#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIBabeltowerMenuBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
template <typename T> class MEKABAIJMNM_1;

#define PLDDMMGCOJI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1BF24DE0)
#define PLDDMMGCOJI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1BF24D10)
#define PLDDMMGCOJI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1BF24B00)
#define PLDDMMGCOJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF24DD0)

inline static constexpr unsigned int PLDDMMGCOJI_TypeDefinitionIndex = 60838;

class PLDDMMGCOJI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KLNOJLDJCHI; // 0x18
	::UnityEngine::RectTransform* EFNEDNPPDIH; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIBabeltowerMenuBtnWidgetController*>* KOBEHMIKNKK; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIBabeltowerMenuBtnWidgetController*>* JHFBNAJLFFE; // 0x30
	::MoleMole::NotificationBadge* HMAKHHANCBI; // 0x38
	::LGINJIKKBJA* BKDDKDMILCA; // 0x40
	::MoleMole::NotificationBadge* IPIPEOOLNJA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDDMMGCOJI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PLDDMMGCOJI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PLDDMMGCOJI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDDMMGCOJI_KGEBDLGBGNM_OFFSET))(this);
	}
};
