#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define MEGBKANFNIH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C78CA0)
#define MEGBKANFNIH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16C78B90)
#define MEGBKANFNIH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C78A10)
#define MEGBKANFNIH__CTOR_OFFSET UNITYSDK_OFFSET(0x16C78C90)

inline static constexpr unsigned int MEGBKANFNIH_TypeDefinitionIndex = 49621;

class MEGBKANFNIH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BGGEDBJAADH; // 0x18
	::FGCOIBFFCHB* IAKJDEPDOAI; // 0x20
	::FGCOIBFFCHB* IKJONLGPLLF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGBKANFNIH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEGBKANFNIH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGBKANFNIH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEGBKANFNIH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
