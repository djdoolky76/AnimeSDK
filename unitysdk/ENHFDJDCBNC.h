#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define ENHFDJDCBNC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1724DAC0)
#define ENHFDJDCBNC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1724D9D0)
#define ENHFDJDCBNC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1724D810)
#define ENHFDJDCBNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1724DAB0)

inline static constexpr unsigned int ENHFDJDCBNC_TypeDefinitionIndex = 74105;

class ENHFDJDCBNC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* HEKPNMLHFNK; // 0x18
	::FGCOIBFFCHB* IJEHHILCNGP; // 0x20
	::UnityEngine::Animation* HMJOILOJDAA; // 0x28
	::UnityEngine::Transform* MCFBELGDPEE; // 0x30
	::UnityEngine::Animation* AHAJDJJNDAG; // 0x38
	::FGCOIBFFCHB* MFIMDBGAKKA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHFDJDCBNC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENHFDJDCBNC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHFDJDCBNC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENHFDJDCBNC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
