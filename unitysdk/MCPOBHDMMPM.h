#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define MCPOBHDMMPM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D63560)
#define MCPOBHDMMPM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14D634D0)
#define MCPOBHDMMPM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D63330)
#define MCPOBHDMMPM__CTOR_OFFSET UNITYSDK_OFFSET(0x14D63550)

inline static constexpr unsigned int MCPOBHDMMPM_TypeDefinitionIndex = 58687;

class MCPOBHDMMPM : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::LGINJIKKBJA* HODPPKHAJAG; // 0x20
	::ADEJAGFCBHK* FJPCAHJIAGA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPOBHDMMPM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCPOBHDMMPM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPOBHDMMPM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCPOBHDMMPM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
