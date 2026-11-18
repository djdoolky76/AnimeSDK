#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define HMOGFEHEGEG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19E33EF0)
#define HMOGFEHEGEG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19E33DB0)
#define HMOGFEHEGEG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19E33C10)
#define HMOGFEHEGEG__CTOR_OFFSET UNITYSDK_OFFSET(0x19E33EE0)

inline static constexpr unsigned int HMOGFEHEGEG_TypeDefinitionIndex = 88374;

class HMOGFEHEGEG : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::FGCOIBFFCHB* COJLANNJLOE; // 0x20
	::FGCOIBFFCHB* DFFBGMLDFOJ; // 0x28
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOGFEHEGEG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMOGFEHEGEG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMOGFEHEGEG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOGFEHEGEG_KGEBDLGBGNM_OFFSET))(this);
	}
};
