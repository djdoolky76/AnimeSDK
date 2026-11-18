#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define KJIKPDBHALG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x186312D0)
#define KJIKPDBHALG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x186311E0)
#define KJIKPDBHALG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18631050)
#define KJIKPDBHALG__CTOR_OFFSET UNITYSDK_OFFSET(0x186312C0)

inline static constexpr unsigned int KJIKPDBHALG_TypeDefinitionIndex = 62886;

class KJIKPDBHALG : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* APABKAMAOCF; // 0x18
	::LGINJIKKBJA* ECLHHDJEFBJ; // 0x20
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x28
	::UnityEngine::RectTransform* KJFEIJDKHCA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIKPDBHALG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJIKPDBHALG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJIKPDBHALG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIKPDBHALG_KGEBDLGBGNM_OFFSET))(this);
	}
};
