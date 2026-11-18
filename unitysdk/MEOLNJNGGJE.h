#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }

#define MEOLNJNGGJE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x177B8FF0)
#define MEOLNJNGGJE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x177B8E10)
#define MEOLNJNGGJE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x177B8B40)
#define MEOLNJNGGJE__CTOR_OFFSET UNITYSDK_OFFSET(0x177B8FE0)

inline static constexpr unsigned int MEOLNJNGGJE_TypeDefinitionIndex = 74092;

class MEOLNJNGGJE : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LFLMJDPLKML; // 0x18
	::UnityEngine::RectTransform* PLBHDNDOKEJ; // 0x20
	::UnityEngine::GameObject* AFAEPBHEIBM; // 0x28
	::LGINJIKKBJA* NCFIHBBCGMF; // 0x30
	::LGINJIKKBJA* LINJCKMHJNH; // 0x38
	::LGINJIKKBJA* EFOJEJEAGCL; // 0x40
	::LGINJIKKBJA* JJPMFDNJFJG; // 0x48
	::UnityEngine::GameObject* DCNDNOMKIDE; // 0x50
	::LGINJIKKBJA* PLPMCNAOCMB; // 0x58
	::LGINJIKKBJA* JMIAEALCJFA; // 0x60
	::FGCOIBFFCHB* CCEJCHGOFDI; // 0x68
	::UnityEngine::UI::Extension::UIImgEventTrigger* KNHLOHIEIIL; // 0x70
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEOLNJNGGJE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEOLNJNGGJE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEOLNJNGGJE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEOLNJNGGJE_KGEBDLGBGNM_OFFSET))(this);
	}
};
