#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define EGMCBHOKNKD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF9C3F30)
#define EGMCBHOKNKD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF9C3E60)
#define EGMCBHOKNKD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF9C3D10)
#define EGMCBHOKNKD__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C3F20)

inline static constexpr unsigned int EGMCBHOKNKD_TypeDefinitionIndex = 54964;

class EGMCBHOKNKD : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMCBHOKNKD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGMCBHOKNKD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGMCBHOKNKD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMCBHOKNKD_KGEBDLGBGNM_OFFSET))(this);
	}
};
