#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/PGOJAMFLILK.h"

#define IJIPIJFJFIG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13AA86C0)
#define IJIPIJFJFIG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13AA87B0)
#define IJIPIJFJFIG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13AA8630)
#define IJIPIJFJFIG_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x13AA8710)
#define IJIPIJFJFIG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13AA8520)
#define IJIPIJFJFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AA85B0)
#define IJIPIJFJFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA8620)

inline static constexpr unsigned int IJIPIJFJFIG_TypeDefinitionIndex = 68562;

class IJIPIJFJFIG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x114; // 0x0
	::PGOJAMFLILK OLPMJAECJBO; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJIPIJFJFIG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPIJFJFIG__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPIJFJFIG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPIJFJFIG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::PGOJAMFLILK DCCDGIDJFKB)
	{
		return ((::System::Void(*)(::PVOID, ::PGOJAMFLILK))((::PBYTE)hIl2Cpp + IJIPIJFJFIG_CNHBDOMKKDE_OFFSET))(this, DCCDGIDJFKB);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPIJFJFIG_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPIJFJFIG_FIGPAOKNJLN_OFFSET))(this);
	}
};
