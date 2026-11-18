#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define FPMBAJAEFHB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x156D8770)
#define FPMBAJAEFHB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x156D86E0)
#define FPMBAJAEFHB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x156D8590)
#define FPMBAJAEFHB__CTOR_OFFSET UNITYSDK_OFFSET(0x156D8760)

inline static constexpr unsigned int FPMBAJAEFHB_TypeDefinitionIndex = 60529;

class FPMBAJAEFHB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMBAJAEFHB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPMBAJAEFHB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMBAJAEFHB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPMBAJAEFHB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
