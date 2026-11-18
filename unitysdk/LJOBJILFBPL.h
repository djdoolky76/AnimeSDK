#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define LJOBJILFBPL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x158EF910)
#define LJOBJILFBPL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x158EF790)
#define LJOBJILFBPL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x158EF520)
#define LJOBJILFBPL__CTOR_OFFSET UNITYSDK_OFFSET(0x158EF900)

inline static constexpr unsigned int LJOBJILFBPL_TypeDefinitionIndex = 43754;

class LJOBJILFBPL : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OEFMINBLAGB; // 0x18
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x20
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x28
	::UnityEngine::RectTransform* PKLMECKJGJI; // 0x30
	::FGCOIBFFCHB* KKMCLPDAJKJ; // 0x38
	::FGCOIBFFCHB* NMNMCIGILJN; // 0x40
	::MoleMole::NotificationBadge* HFCOKPBMGGA; // 0x48
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x50
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x58
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOBJILFBPL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJOBJILFBPL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJOBJILFBPL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOBJILFBPL_KGEBDLGBGNM_OFFSET))(this);
	}
};
