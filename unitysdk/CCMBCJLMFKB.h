#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define CCMBCJLMFKB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16862DD0)
#define CCMBCJLMFKB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16862D20)
#define CCMBCJLMFKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16862BC0)
#define CCMBCJLMFKB__CTOR_OFFSET UNITYSDK_OFFSET(0x16862DC0)

inline static constexpr unsigned int CCMBCJLMFKB_TypeDefinitionIndex = 55350;

class CCMBCJLMFKB : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* PNEJILEEAML; // 0x18
	::FGCOIBFFCHB* MCBLBOLNFPL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMBCJLMFKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CCMBCJLMFKB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMBCJLMFKB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CCMBCJLMFKB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
