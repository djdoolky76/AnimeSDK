#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define ODMEMNBJDIK_BBBMDLICIKI_OFFSET UNITYSDK_OFFSET(0x13A4D750)
#define ODMEMNBJDIK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13A4D700)
#define ODMEMNBJDIK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13A4D660)
#define ODMEMNBJDIK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13A4D5D0)
#define ODMEMNBJDIK_NJLBHKIHIIP_OFFSET UNITYSDK_OFFSET(0x13A4D6F0)
#define ODMEMNBJDIK_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x13A4D760)
#define ODMEMNBJDIK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13A4D4C0)
#define ODMEMNBJDIK__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A4D550)
#define ODMEMNBJDIK__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4D5C0)

inline static constexpr unsigned int ODMEMNBJDIK_TypeDefinitionIndex = 71594;

class ODMEMNBJDIK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x120; // 0x0
	::System::Int32 _BIFHDFGHGDA_k__BackingField; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODMEMNBJDIK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMEMNBJDIK__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMEMNBJDIK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMEMNBJDIK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMEMNBJDIK_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void NJLBHKIHIIP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODMEMNBJDIK_NJLBHKIHIIP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 LOFNOJJPEDC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODMEMNBJDIK_CNHBDOMKKDE_OFFSET))(this, LOFNOJJPEDC);
	}

	::System::Int32 BBBMDLICIKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMEMNBJDIK_BBBMDLICIKI_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMEMNBJDIK_OHFHFOHMBJH_OFFSET))(this);
	}
};
