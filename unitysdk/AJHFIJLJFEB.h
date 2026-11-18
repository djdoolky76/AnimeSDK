#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class EJHDAGNMLDJ;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define AJHFIJLJFEB_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x1435A380)
#define AJHFIJLJFEB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1435A4B0)
#define AJHFIJLJFEB_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x1435A640)
#define AJHFIJLJFEB_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x1435A550)
#define AJHFIJLJFEB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1435A2F0)
#define AJHFIJLJFEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1435A0F0)
#define AJHFIJLJFEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1435A370)

inline static constexpr unsigned int AJHFIJLJFEB_TypeDefinitionIndex = 39390;

class AJHFIJLJFEB : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::MoleMole::MonoGamepadSpaceList* MHAFFAEJCKG; // 0x18
	::UnityEngine::RectTransform* ADMHOOFAKAM; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::LGINJIKKBJA* DBGOKJNAIDH; // 0x30
	::GCIMMDDIFBJ* BHABPKLIAIH; // 0x38
	::UnityEngine::GameObject* MBKACMJJMBH; // 0x40
	::UnityEngine::RectTransform* NKKENFOHLNH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHFIJLJFEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJHFIJLJFEB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHFIJLJFEB_KGEBDLGBGNM_OFFSET))(this);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJHFIJLJFEB_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJHFIJLJFEB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::AJHFIJLJFEB* KDGMEFEJMGJ(::EJHDAGNMLDJ* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::AJHFIJLJFEB*(*)(::EJHDAGNMLDJ*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJHFIJLJFEB_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ_1(::EJHDAGNMLDJ* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::EJHDAGNMLDJ*))((::PBYTE)hIl2Cpp + AJHFIJLJFEB_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}
};
