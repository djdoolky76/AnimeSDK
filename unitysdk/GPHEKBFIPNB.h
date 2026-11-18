#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define GPHEKBFIPNB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10FFA110)
#define GPHEKBFIPNB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10FFA040)
#define GPHEKBFIPNB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10FF9DF0)
#define GPHEKBFIPNB__CTOR_OFFSET UNITYSDK_OFFSET(0x10FFA100)

inline static constexpr unsigned int GPHEKBFIPNB_TypeDefinitionIndex = 56463;

class GPHEKBFIPNB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* EFGKMCHGIIE; // 0x18
	::UnityEngine::RectTransform* MKCEMJHPCIE; // 0x20
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x28
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x30
	::UnityEngine::RectTransform* PIJDOJAKFGK; // 0x38
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x40
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x48
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x50
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x58
	::UnityEngine::RectTransform* KOIELMLMGDM; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHEKBFIPNB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GPHEKBFIPNB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHEKBFIPNB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GPHEKBFIPNB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
