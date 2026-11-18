#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define IFPMLIIGCFJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1013BFD0)
#define IFPMLIIGCFJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1013BF40)
#define IFPMLIIGCFJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1013BD60)
#define IFPMLIIGCFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1013BFC0)

inline static constexpr unsigned int IFPMLIIGCFJ_TypeDefinitionIndex = 70402;

class IFPMLIIGCFJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* OGANHABNAGC; // 0x18
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x20
	::UnityEngine::RectTransform* MAOBKJJEKAH; // 0x28
	::LGINJIKKBJA* GHCOFLDPCPE; // 0x30
	::UnityEngine::RectTransform* HEMEAKNPBBF; // 0x38
	::UnityEngine::RectTransform* AMLGJLFOLKE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPMLIIGCFJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IFPMLIIGCFJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPMLIIGCFJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IFPMLIIGCFJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
