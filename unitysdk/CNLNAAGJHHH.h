#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CNLNAAGJHHH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15347860)
#define CNLNAAGJHHH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x153476C0)
#define CNLNAAGJHHH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15347470)
#define CNLNAAGJHHH__CTOR_OFFSET UNITYSDK_OFFSET(0x15347850)

inline static constexpr unsigned int CNLNAAGJHHH_TypeDefinitionIndex = 47480;

class CNLNAAGJHHH : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* CCIOMHAAOLN; // 0x18
	::UnityEngine::Transform* JIKEHPNIEBP; // 0x20
	::LGINJIKKBJA* BKDDKDMILCA; // 0x28
	::UnityEngine::Transform* KKBHLPCGFLN; // 0x30
	::LGINJIKKBJA* DPEBIONMDEO; // 0x38
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x40
	::LGINJIKKBJA* MFLEBPBJGLH; // 0x48
	::LGINJIKKBJA* PDDGFBMCGFI; // 0x50
	::LGINJIKKBJA* GAFPNLFDFPD; // 0x58
	::LGINJIKKBJA* EPKHJKBAFBP; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLNAAGJHHH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNLNAAGJHHH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLNAAGJHHH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNLNAAGJHHH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
