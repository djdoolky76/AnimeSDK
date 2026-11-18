#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CPCIOMEEEKK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x193EC5B0)
#define CPCIOMEEEKK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x193EC520)
#define CPCIOMEEEKK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x193EC3D0)
#define CPCIOMEEEKK__CTOR_OFFSET UNITYSDK_OFFSET(0x193EC5A0)

inline static constexpr unsigned int CPCIOMEEEKK_TypeDefinitionIndex = 50920;

class CPCIOMEEEKK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IJLFMJHLDNM; // 0x18
	::LGINJIKKBJA* CEPOMBMOBBA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCIOMEEEKK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CPCIOMEEEKK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCIOMEEEKK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CPCIOMEEEKK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
