#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define JCBENPCDKBL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1872DC30)
#define JCBENPCDKBL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1872DBA0)
#define JCBENPCDKBL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1872DA30)
#define JCBENPCDKBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1872DC20)

inline static constexpr unsigned int JCBENPCDKBL_TypeDefinitionIndex = 75396;

class JCBENPCDKBL : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::UnityEngine::RectTransform* LBFPGDJHPDB; // 0x20
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBENPCDKBL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JCBENPCDKBL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JCBENPCDKBL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBENPCDKBL_KGEBDLGBGNM_OFFSET))(this);
	}
};
