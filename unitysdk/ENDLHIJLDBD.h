#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }

#define ENDLHIJLDBD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF9E4040)
#define ENDLHIJLDBD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF9E3F40)
#define ENDLHIJLDBD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF9E3D60)
#define ENDLHIJLDBD__CTOR_OFFSET UNITYSDK_OFFSET(0xF9E4030)

inline static constexpr unsigned int ENDLHIJLDBD_TypeDefinitionIndex = 49525;

class ENDLHIJLDBD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* GFLEPFOCFKF; // 0x18
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x20
	::LGINJIKKBJA* FNIDLOKFHMF; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::FGCOIBFFCHB* ANPBCLAFCJB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDLHIJLDBD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENDLHIJLDBD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENDLHIJLDBD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDLHIJLDBD_KGEBDLGBGNM_OFFSET))(this);
	}
};
