#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define IFMEAHAFEHJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x160A21C0)
#define IFMEAHAFEHJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x160A2130)
#define IFMEAHAFEHJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x160A20A0)
#define IFMEAHAFEHJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x160A2020)
#define IFMEAHAFEHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x160A2090)

inline static constexpr unsigned int IFMEAHAFEHJ_TypeDefinitionIndex = 40225;

class IFMEAHAFEHJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x147; // 0x0
	::System::Int32 HFPCJJLPEBD; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFMEAHAFEHJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMEAHAFEHJ__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMEAHAFEHJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMEAHAFEHJ_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 OIKFFGKDHME)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFMEAHAFEHJ_CNHBDOMKKDE_OFFSET))(this, OIKFFGKDHME);
	}
};
