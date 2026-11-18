#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define ELIGOENBOLP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1235ED40)
#define ELIGOENBOLP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1235EC90)
#define ELIGOENBOLP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1235EB30)
#define ELIGOENBOLP__CTOR_OFFSET UNITYSDK_OFFSET(0x1235ED30)

inline static constexpr unsigned int ELIGOENBOLP_TypeDefinitionIndex = 41274;

class ELIGOENBOLP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::FGCOIBFFCHB* JJEEOEKCKND; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIGOENBOLP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ELIGOENBOLP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ELIGOENBOLP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIGOENBOLP_KGEBDLGBGNM_OFFSET))(this);
	}
};
