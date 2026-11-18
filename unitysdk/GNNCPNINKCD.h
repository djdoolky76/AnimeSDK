#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define GNNCPNINKCD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x125ECF20)
#define GNNCPNINKCD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x125ECF80)
#define GNNCPNINKCD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x125ECE90)
#define GNNCPNINKCD__CCTOR_OFFSET UNITYSDK_OFFSET(0x125ECE10)
#define GNNCPNINKCD__CTOR_OFFSET UNITYSDK_OFFSET(0x125ECE80)

inline static constexpr unsigned int GNNCPNINKCD_TypeDefinitionIndex = 48124;

class GNNCPNINKCD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x10; // 0x0
	::System::Int32 IBPDIIFNAOC; // 0x20
	::System::Boolean JPNGGKDGMMM; // 0x24
	::System::Byte _padding0[0x3];
	::System::Int32 CCOLMNOFHDK; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNNCPNINKCD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNCPNINKCD__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNCPNINKCD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 KPCHDBCBDOG, ::System::Int32 IBPDIIFNAOC, ::System::Boolean LKLHOHFPMDO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GNNCPNINKCD_CNHBDOMKKDE_OFFSET))(this, KPCHDBCBDOG, IBPDIIFNAOC, LKLHOHFPMDO);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNCPNINKCD_FIGPAOKNJLN_OFFSET))(this);
	}
};
