#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define CIGCECECKOL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x19A0F7F0)
#define CIGCECECKOL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x19A0F840)
#define CIGCECECKOL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x19A0F760)
#define CIGCECECKOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A0F6E0)
#define CIGCECECKOL__CTOR_OFFSET UNITYSDK_OFFSET(0x19A0F750)

inline static constexpr unsigned int CIGCECECKOL_TypeDefinitionIndex = 84400;

class CIGCECECKOL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x123; // 0x0
	::System::Boolean DOFCLPCLHOJ; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIGCECECKOL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGCECECKOL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGCECECKOL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean CAAFEGLOALC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIGCECECKOL_CNHBDOMKKDE_OFFSET))(this, CAAFEGLOALC);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGCECECKOL_FIGPAOKNJLN_OFFSET))(this);
	}
};
