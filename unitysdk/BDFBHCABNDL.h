#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OPPALKBNEBC.h"
#include "unitysdk/System/Object.h"

#define BDFBHCABNDL_BNJHEKFGHLD_OFFSET UNITYSDK_OFFSET(0x1854D5F0)
#define BDFBHCABNDL_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x1854D680)
#define BDFBHCABNDL_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1854D750)
#define BDFBHCABNDL_GHMFDNIGAPO_OFFSET UNITYSDK_OFFSET(0x1854D7B0)
#define BDFBHCABNDL_HEMOHDFDKEG_OFFSET UNITYSDK_OFFSET(0x1854D5E0)
#define BDFBHCABNDL_LGAFACFIAGI_OFFSET UNITYSDK_OFFSET(0x1854D640)
#define BDFBHCABNDL_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x1854D600)
#define BDFBHCABNDL_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x1854D6F0)
#define BDFBHCABNDL__CTOR_OFFSET UNITYSDK_OFFSET(0x1854D6E0)

inline static constexpr unsigned int BDFBHCABNDL_TypeDefinitionIndex = 49940;

class BDFBHCABNDL : public ::System::Object
{
public:
	::OPPALKBNEBC _EEFGOAJIPNI_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFBHCABNDL__CTOR_OFFSET))(this);
	}

	::OPPALKBNEBC HEMOHDFDKEG()
	{
		return ((::OPPALKBNEBC(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFBHCABNDL_HEMOHDFDKEG_OFFSET))(this);
	}

	::System::Void BNJHEKFGHLD(::OPPALKBNEBC EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OPPALKBNEBC))((::PBYTE)hIl2Cpp + BDFBHCABNDL_BNJHEKFGHLD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFBHCABNDL_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void LGAFACFIAGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFBHCABNDL_LGAFACFIAGI_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDFBHCABNDL_DFJPMOOOLHM_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFBHCABNDL_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFBHCABNDL_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Boolean GHMFDNIGAPO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFBHCABNDL_GHMFDNIGAPO_OFFSET))(this);
	}
};
