#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CCDGMGEKDKB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x168621D0)
#define CCDGMGEKDKB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16862100)
#define CCDGMGEKDKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16861F00)
#define CCDGMGEKDKB__CTOR_OFFSET UNITYSDK_OFFSET(0x168621C0)

inline static constexpr unsigned int CCDGMGEKDKB_TypeDefinitionIndex = 70808;

class CCDGMGEKDKB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::UnityEngine::RectTransform* HELAMPHDBEH; // 0x20
	::FGCOIBFFCHB* MGJHBBLNDJB; // 0x28
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x30
	::FGCOIBFFCHB* ALICOCODPML; // 0x38
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x40
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCDGMGEKDKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CCDGMGEKDKB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CCDGMGEKDKB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCDGMGEKDKB_KGEBDLGBGNM_OFFSET))(this);
	}
};
