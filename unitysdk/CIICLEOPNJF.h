#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define CIICLEOPNJF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18DD2F60)
#define CIICLEOPNJF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18DD2E70)
#define CIICLEOPNJF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18DD2D10)
#define CIICLEOPNJF__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD2F50)

inline static constexpr unsigned int CIICLEOPNJF_TypeDefinitionIndex = 41261;

class CIICLEOPNJF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* PFNAFELKHHP; // 0x18
	::FGCOIBFFCHB* BOGHCBIHHBF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIICLEOPNJF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CIICLEOPNJF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CIICLEOPNJF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIICLEOPNJF_KGEBDLGBGNM_OFFSET))(this);
	}
};
