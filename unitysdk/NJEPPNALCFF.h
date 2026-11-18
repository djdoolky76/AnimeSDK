#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class HBKKNEAGMIM;

#define NJEPPNALCFF_AGEBKFFHLGA_OFFSET UNITYSDK_OFFSET(0xE583A20)
#define NJEPPNALCFF_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0xE5839D0)
#define NJEPPNALCFF_ONSTART_OFFSET UNITYSDK_OFFSET(0xE583990)
#define NJEPPNALCFF__CTOR_OFFSET UNITYSDK_OFFSET(0xE583A10)

inline static constexpr unsigned int NJEPPNALCFF_TypeDefinitionIndex = 63116;

class NJEPPNALCFF : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEPPNALCFF__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEPPNALCFF_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEPPNALCFF_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void AGEBKFFHLGA(::HBKKNEAGMIM* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::HBKKNEAGMIM*))((::PBYTE)hIl2Cpp + NJEPPNALCFF_AGEBKFFHLGA_OFFSET))(this, GLAOEHCGCFO);
	}
};
