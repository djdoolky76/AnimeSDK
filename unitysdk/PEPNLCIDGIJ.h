#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define PEPNLCIDGIJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x150C0F10)
#define PEPNLCIDGIJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x150C0E80)
#define PEPNLCIDGIJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x150C0D40)
#define PEPNLCIDGIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x150C0F00)

inline static constexpr unsigned int PEPNLCIDGIJ_TypeDefinitionIndex = 68309;

class PEPNLCIDGIJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* KKOJIGEFPBM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNLCIDGIJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEPNLCIDGIJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNLCIDGIJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEPNLCIDGIJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
