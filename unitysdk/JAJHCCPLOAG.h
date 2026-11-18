#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define JAJHCCPLOAG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x160C6FF0)
#define JAJHCCPLOAG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x160C6F20)
#define JAJHCCPLOAG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x160C6D50)
#define JAJHCCPLOAG__CTOR_OFFSET UNITYSDK_OFFSET(0x160C6FE0)

inline static constexpr unsigned int JAJHCCPLOAG_TypeDefinitionIndex = 71799;

class JAJHCCPLOAG : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x18
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x20
	::UnityEngine::RectTransform* CHDHLLNDGIN; // 0x28
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x30
	::UnityEngine::RectTransform* IMAHDBILHFL; // 0x38
	::UnityEngine::RectTransform* EPJNLBHLMCO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJHCCPLOAG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JAJHCCPLOAG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JAJHCCPLOAG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJHCCPLOAG_KGEBDLGBGNM_OFFSET))(this);
	}
};
