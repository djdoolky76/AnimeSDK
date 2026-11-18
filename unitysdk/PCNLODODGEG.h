#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define PCNLODODGEG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x173148E0)
#define PCNLODODGEG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x173147D0)
#define PCNLODODGEG__CTOR_OFFSET UNITYSDK_OFFSET(0x173148D0)

inline static constexpr unsigned int PCNLODODGEG_TypeDefinitionIndex = 49687;

class PCNLODODGEG : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* NBOCKKAGHMB; // 0x18
	::GCIMMDDIFBJ* LKHOAKOJPGD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNLODODGEG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCNLODODGEG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCNLODODGEG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
