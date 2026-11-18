#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define PPAHKDFKEMI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1D9D81C0)
#define PPAHKDFKEMI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1D9D8110)
#define PPAHKDFKEMI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1D9D7F10)
#define PPAHKDFKEMI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D81B0)

inline static constexpr unsigned int PPAHKDFKEMI_TypeDefinitionIndex = 44238;

class PPAHKDFKEMI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* ANPBCLAFCJB; // 0x18
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAHKDFKEMI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PPAHKDFKEMI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAHKDFKEMI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PPAHKDFKEMI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
