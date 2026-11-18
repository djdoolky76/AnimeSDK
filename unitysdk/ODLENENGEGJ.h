#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define ODLENENGEGJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F5CF70)
#define ODLENENGEGJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15F5CE30)
#define ODLENENGEGJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F5CC70)
#define ODLENENGEGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5CF60)

inline static constexpr unsigned int ODLENENGEGJ_TypeDefinitionIndex = 90488;

class ODLENENGEGJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* HLJMMLMNFDG; // 0x18
	::FGCOIBFFCHB* MPFDMAPAHOO; // 0x20
	::LGINJIKKBJA* NFPPCPHMJAJ; // 0x28
	::FGCOIBFFCHB* NNJBILHEMEF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLENENGEGJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODLENENGEGJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLENENGEGJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODLENENGEGJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
