#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFIEJHHKEOL.h"

#define FMLIOBMNHDG_ICOELJNGAPB_OFFSET UNITYSDK_OFFSET(0x1E878090)
#define FMLIOBMNHDG_LGAFACFIAGI_OFFSET UNITYSDK_OFFSET(0x1E878020)
#define FMLIOBMNHDG_MHBDNIJPBOG_OFFSET UNITYSDK_OFFSET(0x1E878080)
#define FMLIOBMNHDG_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x1E877F80)
#define FMLIOBMNHDG_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1E877FC0)
#define FMLIOBMNHDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E878070)

inline static constexpr unsigned int FMLIOBMNHDG_TypeDefinitionIndex = 94381;

class FMLIOBMNHDG : public ::KFIEJHHKEOL
{
public:
	::System::UInt32 _ONJLBBNGNOE_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLIOBMNHDG__CTOR_OFFSET))(this);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLIOBMNHDG_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FMLIOBMNHDG_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void LGAFACFIAGI(::System::Boolean MBEMOHDDEMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMLIOBMNHDG_LGAFACFIAGI_OFFSET))(this, MBEMOHDDEMA);
	}

	::System::Void MHBDNIJPBOG(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMLIOBMNHDG_MHBDNIJPBOG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 ICOELJNGAPB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLIOBMNHDG_ICOELJNGAPB_OFFSET))(this);
	}
};
