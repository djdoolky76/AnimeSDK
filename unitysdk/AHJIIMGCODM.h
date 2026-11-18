#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define AHJIIMGCODM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x154F9BE0)
#define AHJIIMGCODM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x154F9B10)
#define AHJIIMGCODM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x154F99C0)
#define AHJIIMGCODM__CTOR_OFFSET UNITYSDK_OFFSET(0x154F9BD0)

inline static constexpr unsigned int AHJIIMGCODM_TypeDefinitionIndex = 76593;

class AHJIIMGCODM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJIIMGCODM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHJIIMGCODM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHJIIMGCODM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJIIMGCODM_KGEBDLGBGNM_OFFSET))(this);
	}
};
