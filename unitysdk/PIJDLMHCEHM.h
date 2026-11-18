#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class ShaderAniHelp;
namespace MoleMole { class UIControlCollection; }

#define PIJDLMHCEHM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14B9E480)
#define PIJDLMHCEHM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14B9E3F0)
#define PIJDLMHCEHM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14B9E250)
#define PIJDLMHCEHM__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9E470)

inline static constexpr unsigned int PIJDLMHCEHM_TypeDefinitionIndex = 92401;

class PIJDLMHCEHM : public ::GIBMJLOJLKD
{
public:
	::ShaderAniHelp* JGJOPAKCPHH; // 0x18
	::FGCOIBFFCHB* IPIHNECKFOF; // 0x20
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJDLMHCEHM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIJDLMHCEHM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIJDLMHCEHM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJDLMHCEHM_KGEBDLGBGNM_OFFSET))(this);
	}
};
