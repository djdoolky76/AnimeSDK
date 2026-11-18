#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define BABAPAHEMHK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13608480)
#define BABAPAHEMHK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13608340)
#define BABAPAHEMHK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x136081A0)
#define BABAPAHEMHK__CTOR_OFFSET UNITYSDK_OFFSET(0x13608470)

inline static constexpr unsigned int BABAPAHEMHK_TypeDefinitionIndex = 47685;

class BABAPAHEMHK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OANAKHDAKAG; // 0x18
	::FGCOIBFFCHB* PLJMOFKPGIB; // 0x20
	::FGCOIBFFCHB* LGCKINLDCHE; // 0x28
	::FGCOIBFFCHB* DKAJDEONDDI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABAPAHEMHK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BABAPAHEMHK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABAPAHEMHK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BABAPAHEMHK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
