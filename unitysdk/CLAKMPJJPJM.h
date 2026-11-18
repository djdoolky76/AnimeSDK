#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLAKMPJJPJM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x145D17D0)
#define CLAKMPJJPJM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x145D1740)
#define CLAKMPJJPJM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x145D1500)
#define CLAKMPJJPJM__CTOR_OFFSET UNITYSDK_OFFSET(0x145D17C0)

inline static constexpr unsigned int CLAKMPJJPJM_TypeDefinitionIndex = 47574;

class CLAKMPJJPJM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KBNCNCGBILE; // 0x18
	::UnityEngine::RectTransform* JHFBGCIIJEC; // 0x20
	::UnityEngine::RectTransform* PBKOIDEEKND; // 0x28
	::UnityEngine::RectTransform* MBNABCJHFAA; // 0x30
	::UnityEngine::RectTransform* KBJOCBAKICC; // 0x38
	::UnityEngine::RectTransform* HNKFLCDOGCH; // 0x40
	::UnityEngine::RectTransform* FGDJOAJCBLA; // 0x48
	::UnityEngine::RectTransform* NOMDPDIDDEE; // 0x50
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x58
	::UnityEngine::Transform* ODALDIOFMPH; // 0x60
	::UnityEngine::RectTransform* FBJODPLLNGC; // 0x68
	::UnityEngine::RectTransform* NENFALNCMDL; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAKMPJJPJM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLAKMPJJPJM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAKMPJJPJM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLAKMPJJPJM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
