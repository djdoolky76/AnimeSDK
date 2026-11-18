#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class MonoChaserConfig; }
namespace MoleMole { class UIControlCollection; }

#define ODOMCGDLHCN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14F6D190)
#define ODOMCGDLHCN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14F6D100)
#define ODOMCGDLHCN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F6CFB0)
#define ODOMCGDLHCN__CTOR_OFFSET UNITYSDK_OFFSET(0x14F6D180)

inline static constexpr unsigned int ODOMCGDLHCN_TypeDefinitionIndex = 55656;

class ODOMCGDLHCN : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoChaserConfig* ICIPFCFOGJN; // 0x18
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOMCGDLHCN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODOMCGDLHCN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOMCGDLHCN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODOMCGDLHCN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
