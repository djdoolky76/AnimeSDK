#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class ShaderAniHelp;
namespace MoleMole { class UIControlCollection; }

#define OAKCINIIDMK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x136633E0)
#define OAKCINIIDMK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13663350)
#define OAKCINIIDMK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x136631B0)
#define OAKCINIIDMK__CTOR_OFFSET UNITYSDK_OFFSET(0x136633D0)

inline static constexpr unsigned int OAKCINIIDMK_TypeDefinitionIndex = 56390;

class OAKCINIIDMK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* IPIHNECKFOF; // 0x18
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x20
	::ShaderAniHelp* JGJOPAKCPHH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKCINIIDMK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OAKCINIIDMK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OAKCINIIDMK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKCINIIDMK_KGEBDLGBGNM_OFFSET))(this);
	}
};
