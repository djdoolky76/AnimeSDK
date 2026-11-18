#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define ECEEEAPCMMJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1062C140)
#define ECEEEAPCMMJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1062C0B0)
#define ECEEEAPCMMJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1062C020)
#define ECEEEAPCMMJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1062BF90)
#define ECEEEAPCMMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1062C000)

inline static constexpr unsigned int ECEEEAPCMMJ_TypeDefinitionIndex = 42471;

class ECEEEAPCMMJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x13E; // 0x0
	::System::Boolean MFNIKBGEOJG; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECEEEAPCMMJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEEEAPCMMJ__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEEEAPCMMJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEEEAPCMMJ_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean CAAFEGLOALC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECEEEAPCMMJ_CNHBDOMKKDE_OFFSET))(this, CAAFEGLOALC);
	}
};
