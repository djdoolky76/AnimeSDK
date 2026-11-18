#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACFKPBFKCLE_DNKFFAKFBKE.h"
#include "unitysdk/ACFKPBFKCLE_NGMDLMFGIBO.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/Vehicle/VehicleDriftConfig.h"

#define ACFKPBFKCLE_AKNGPKPFMAI_OFFSET UNITYSDK_OFFSET(0x6E05C0)
#define ACFKPBFKCLE_BHPNDOHCJED_OFFSET UNITYSDK_OFFSET(0x6E0680)
#define ACFKPBFKCLE_DNLOMGGBOFD_OFFSET UNITYSDK_OFFSET(0x6E0860)
#define ACFKPBFKCLE_JLLONILACOB_OFFSET UNITYSDK_OFFSET(0x6E0740)
#define ACFKPBFKCLE_JOFDANMDEBN_OFFSET UNITYSDK_OFFSET(0x6E0690)
#define ACFKPBFKCLE_LBIAAKPFIPF_OFFSET UNITYSDK_OFFSET(0x6E06F0)
#define ACFKPBFKCLE_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x6E0790)
#define ACFKPBFKCLE_PGPAOCEHGDK_OFFSET UNITYSDK_OFFSET(0x6E0620)

inline static constexpr unsigned int ACFKPBFKCLE_TypeDefinitionIndex = 59390;

struct alignas(4) ACFKPBFKCLE
{
	::System::Single PIMFAIEAENG; // 0x10
	::System::Single CGJLKCHECIF; // 0x14
	::ACFKPBFKCLE_DNKFFAKFBKE DELPJIILFKG; // 0x18
	::ACFKPBFKCLE_DNKFFAKFBKE LOLEBKBPIHN; // 0x1C

	::System::Boolean AKNGPKPFMAI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFKPBFKCLE_AKNGPKPFMAI_OFFSET))(this);
	}

	::System::Boolean PGPAOCEHGDK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFKPBFKCLE_PGPAOCEHGDK_OFFSET))(this);
	}

	::System::Void BHPNDOHCJED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFKPBFKCLE_BHPNDOHCJED_OFFSET))(this);
	}

	::System::Boolean JOFDANMDEBN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFKPBFKCLE_JOFDANMDEBN_OFFSET))(this);
	}

	::System::Single LBIAAKPFIPF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFKPBFKCLE_LBIAAKPFIPF_OFFSET))(this);
	}

	::System::Boolean JLLONILACOB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFKPBFKCLE_JLLONILACOB_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::MoleMole::Vehicle::VehicleDriftConfig& MEAJACFHPML, ::ACFKPBFKCLE_NGMDLMFGIBO MFCEAABLMJE, ::System::Single PMNLNNGEIFM, ::System::Boolean BDFPENAIKJH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleDriftConfig&, ::ACFKPBFKCLE_NGMDLMFGIBO, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ACFKPBFKCLE_OKJCHFGIKBH_OFFSET))(this, MEAJACFHPML, MFCEAABLMJE, PMNLNNGEIFM, BDFPENAIKJH);
	}

	::System::Boolean DNLOMGGBOFD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFKPBFKCLE_DNLOMGGBOFD_OFFSET))(this);
	}
};
