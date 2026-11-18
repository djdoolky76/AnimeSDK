#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define KBFNGDBKKEC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13CDBC70)
#define KBFNGDBKKEC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13CDBBA0)
#define KBFNGDBKKEC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13CDB9B0)
#define KBFNGDBKKEC__CTOR_OFFSET UNITYSDK_OFFSET(0x13CDBC60)

inline static constexpr unsigned int KBFNGDBKKEC_TypeDefinitionIndex = 72715;

class KBFNGDBKKEC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x38
	::FGCOIBFFCHB* IMENBGPAJOM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFNGDBKKEC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBFNGDBKKEC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBFNGDBKKEC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFNGDBKKEC_KGEBDLGBGNM_OFFSET))(this);
	}
};
