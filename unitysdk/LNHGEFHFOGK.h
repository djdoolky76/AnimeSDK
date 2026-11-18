#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define LNHGEFHFOGK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C69E40)
#define LNHGEFHFOGK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16C69D40)
#define LNHGEFHFOGK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C69B50)
#define LNHGEFHFOGK__CTOR_OFFSET UNITYSDK_OFFSET(0x16C69E30)

inline static constexpr unsigned int LNHGEFHFOGK_TypeDefinitionIndex = 71136;

class LNHGEFHFOGK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* AOIHDBLMELN; // 0x18
	::FGCOIBFFCHB* NMAOIKFLFOO; // 0x20
	::FGCOIBFFCHB* IKGJFFMOCKI; // 0x28
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x30
	::FGCOIBFFCHB* OLCPBMCFNIM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHGEFHFOGK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNHGEFHFOGK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNHGEFHFOGK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHGEFHFOGK_KGEBDLGBGNM_OFFSET))(this);
	}
};
