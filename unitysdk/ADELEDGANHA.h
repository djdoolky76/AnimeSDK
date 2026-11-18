#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define ADELEDGANHA_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x134A7130)
#define ADELEDGANHA_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x134A7180)
#define ADELEDGANHA_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x134A70A0)
#define ADELEDGANHA__CCTOR_OFFSET UNITYSDK_OFFSET(0x134A7020)
#define ADELEDGANHA__CTOR_OFFSET UNITYSDK_OFFSET(0x134A7090)

inline static constexpr unsigned int ADELEDGANHA_TypeDefinitionIndex = 82655;

class ADELEDGANHA : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x8E; // 0x0
	::System::Boolean IKFGJDBGHNO; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADELEDGANHA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADELEDGANHA__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADELEDGANHA_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean KKMENMCMMBN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADELEDGANHA_CNHBDOMKKDE_OFFSET))(this, KKMENMCMMBN);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADELEDGANHA_FIGPAOKNJLN_OFFSET))(this);
	}
};
