#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define MEMGHOKGMMC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C792A0)
#define MEMGHOKGMMC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16C79160)
#define MEMGHOKGMMC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C78F70)
#define MEMGHOKGMMC__CTOR_OFFSET UNITYSDK_OFFSET(0x16C79290)

inline static constexpr unsigned int MEMGHOKGMMC_TypeDefinitionIndex = 69539;

class MEMGHOKGMMC : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* POAHCOLDGJA; // 0x18
	::FGCOIBFFCHB* FDJHEBHLJLD; // 0x20
	::FGCOIBFFCHB* KAAJNKNDKNI; // 0x28
	::FGCOIBFFCHB* NIAELBKHGNH; // 0x30
	::FGCOIBFFCHB* GDJDGAKAEDA; // 0x38
	::FGCOIBFFCHB* DEMFHMDDOEH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMGHOKGMMC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEMGHOKGMMC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEMGHOKGMMC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMGHOKGMMC_KGEBDLGBGNM_OFFSET))(this);
	}
};
