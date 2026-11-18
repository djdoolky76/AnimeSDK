#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define LNNHPABPPOP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A629B00)
#define LNNHPABPPOP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A629A30)
#define LNNHPABPPOP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A6298F0)
#define LNNHPABPPOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A629AF0)

inline static constexpr unsigned int LNNHPABPPOP_TypeDefinitionIndex = 53069;

class LNNHPABPPOP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNNHPABPPOP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNNHPABPPOP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNNHPABPPOP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNNHPABPPOP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
