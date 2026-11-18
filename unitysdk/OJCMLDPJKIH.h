#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ACFKPBFKCLE.h"
#include "unitysdk/IJIPANFKKFB.h"

namespace MoleMole::Vehicle { class VehicleConfig; }

#define OJCMLDPJKIH_ANBDHBAHFEI_OFFSET UNITYSDK_OFFSET(0x411A70)
#define OJCMLDPJKIH_IJBNKOAJKGP_OFFSET UNITYSDK_OFFSET(0x358A70)
#define OJCMLDPJKIH_JICECJFBECB_OFFSET UNITYSDK_OFFSET(0x409330)
#define OJCMLDPJKIH_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x602190)

inline static constexpr unsigned int OJCMLDPJKIH_TypeDefinitionIndex = 72871;

struct alignas(4) OJCMLDPJKIH
{
	::System::Single GANBBPHDCEI; // 0x10
	::System::Single FEPDMAAGELI; // 0x14
	::System::Single PBMGHGDMDMP; // 0x18
	::System::Single LELIKPDDPBM; // 0x1C
	::System::Single PPCNINNIINM; // 0x20

	::System::Single ANBDHBAHFEI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCMLDPJKIH_ANBDHBAHFEI_OFFSET))(this);
	}

	::System::Single JICECJFBECB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCMLDPJKIH_JICECJFBECB_OFFSET))(this);
	}

	::System::Single IJBNKOAJKGP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCMLDPJKIH_IJBNKOAJKGP_OFFSET))(this);
	}

	::System::Single OKJCHFGIKBH(::MoleMole::Vehicle::VehicleConfig* DFMKILICPFB, ::ACFKPBFKCLE& FOEMDFOPJKJ, ::IJIPANFKKFB& CPGLNIFOFAE, ::System::Single LNAFJMFHMKL, ::System::Single HHFOLLLFLLE, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Vehicle::VehicleConfig*, ::ACFKPBFKCLE&, ::IJIPANFKKFB&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OJCMLDPJKIH_OKJCHFGIKBH_OFFSET))(this, DFMKILICPFB, FOEMDFOPJKJ, CPGLNIFOFAE, LNAFJMFHMKL, HHFOLLLFLLE, PBCAAADNEPK);
	}
};
