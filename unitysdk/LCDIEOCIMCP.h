#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define LCDIEOCIMCP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17738E30)
#define LCDIEOCIMCP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17738C20)
#define LCDIEOCIMCP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17738920)
#define LCDIEOCIMCP__CTOR_OFFSET UNITYSDK_OFFSET(0x17738E20)

inline static constexpr unsigned int LCDIEOCIMCP_TypeDefinitionIndex = 90455;

class LCDIEOCIMCP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* GOGGGEPEJCH; // 0x18
	::UnityEngine::Transform* JDLANKLBLDM; // 0x20
	::LGINJIKKBJA* MAPJABKIKLD; // 0x28
	::LGINJIKKBJA* GHMPBKNGNJM; // 0x30
	::UnityEngine::RectTransform* ALCGPPKFIJH; // 0x38
	::FGCOIBFFCHB* NNNBAHABNBG; // 0x40
	::LGINJIKKBJA* JGKDMLBENGD; // 0x48
	::LGINJIKKBJA* PNDOEMHNCOD; // 0x50
	::LGINJIKKBJA* HEOACLIFDNO; // 0x58
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x60
	::LGINJIKKBJA* JMIAEALCJFA; // 0x68
	::UnityEngine::Animation* NNGMAEMFEIH; // 0x70
	::FGCOIBFFCHB* COJLANNJLOE; // 0x78
	::LGINJIKKBJA* DFKNFDCLPGB; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDIEOCIMCP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCDIEOCIMCP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCDIEOCIMCP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDIEOCIMCP_KGEBDLGBGNM_OFFSET))(this);
	}
};
