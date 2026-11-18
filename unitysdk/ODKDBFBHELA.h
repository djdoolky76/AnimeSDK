#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }

#define ODKDBFBHELA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE0EFB10)
#define ODKDBFBHELA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE0EFA00)
#define ODKDBFBHELA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE0EF860)
#define ODKDBFBHELA__CTOR_OFFSET UNITYSDK_OFFSET(0xE0EFB00)

inline static constexpr unsigned int ODKDBFBHELA_TypeDefinitionIndex = 86371;

class ODKDBFBHELA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* DNGFGABBHEG; // 0x18
	::LGINJIKKBJA* PMBLECALCKB; // 0x20
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x28
	::MoleMole::NotificationBadge* OFLCMGNHGBC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKDBFBHELA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODKDBFBHELA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODKDBFBHELA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKDBFBHELA_KGEBDLGBGNM_OFFSET))(this);
	}
};
