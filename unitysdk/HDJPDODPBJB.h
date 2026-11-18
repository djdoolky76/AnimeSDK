#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define HDJPDODPBJB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1407AD00)
#define HDJPDODPBJB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1407AC30)
#define HDJPDODPBJB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1407AA70)
#define HDJPDODPBJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1407ACF0)

inline static constexpr unsigned int HDJPDODPBJB_TypeDefinitionIndex = 48819;

class HDJPDODPBJB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x18
	::FGCOIBFFCHB* DEAPLILJLJD; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::MoleMole::MonoGamepadModule* JBBOBGBKNHI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJPDODPBJB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HDJPDODPBJB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HDJPDODPBJB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJPDODPBJB_KGEBDLGBGNM_OFFSET))(this);
	}
};
