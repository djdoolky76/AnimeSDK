#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define AKLGDPKJDKB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x143B2D20)
#define AKLGDPKJDKB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x143B2C00)
#define AKLGDPKJDKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x143B28D0)
#define AKLGDPKJDKB__CTOR_OFFSET UNITYSDK_OFFSET(0x143B2D10)

inline static constexpr unsigned int AKLGDPKJDKB_TypeDefinitionIndex = 46216;

class AKLGDPKJDKB : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::FGCOIBFFCHB* DNPFGEIIKEE; // 0x20
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x28
	::UnityEngine::GameObject* KEHPAOOHNOI; // 0x30
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x38
	::UnityEngine::GameObject* FCOCNDLFIKE; // 0x40
	::UnityEngine::GameObject* LOBNIECBGLL; // 0x48
	::LGINJIKKBJA* ANCAPPBAAHG; // 0x50
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x58
	::UnityEngine::UI::Text* AMEEMEPHGEL; // 0x60
	::MoleMole::NotificationBadgeEx* CPGNEPMDANH; // 0x68
	::UnityEngine::UI::Text* MMNNLOMMNGL; // 0x70
	::UnityEngine::GameObject* GFEMEHHCDOB; // 0x78
	::LGINJIKKBJA* IODBDPOLPKA; // 0x80
	::UnityEngine::GameObject* JEAEFGNJAGB; // 0x88
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x90
	::UnityEngine::GameObject* LLJNKGKAFNE; // 0x98
	::UnityEngine::GameObject* FONMDGDMGKG; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLGDPKJDKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AKLGDPKJDKB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLGDPKJDKB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AKLGDPKJDKB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
