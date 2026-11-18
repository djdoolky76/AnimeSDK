#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ACFKPBFKCLE.h"
#include "unitysdk/MoleMole/Vehicle/VehicleControlInput.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DDHCAGGGJJP;
namespace MoleMole::Vehicle { class VehicleConfig; }

#define IJIPANFKKFB_BDKGGPAJANC_OFFSET UNITYSDK_OFFSET(0x5B5D90)
#define IJIPANFKKFB_BPKPKLHFBJO_OFFSET UNITYSDK_OFFSET(0x408580)
#define IJIPANFKKFB_EGMNKHHDHFI_OFFSET UNITYSDK_OFFSET(0x411A70)
#define IJIPANFKKFB_NAPCGLONBHO_OFFSET UNITYSDK_OFFSET(0x358A70)
#define IJIPANFKKFB_OCOHHHMHIPM_OFFSET UNITYSDK_OFFSET(0x5B5E60)
#define IJIPANFKKFB_OGJCIOHFFDA_OFFSET UNITYSDK_OFFSET(0x409330)
#define IJIPANFKKFB_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x5B5E10)
#define IJIPANFKKFB_PBKJFFLABMD_OFFSET UNITYSDK_OFFSET(0x5B5EB0)

inline static constexpr unsigned int IJIPANFKKFB_TypeDefinitionIndex = 85091;

struct alignas(4) IJIPANFKKFB
{
	::System::Single GNBLDDDKJJC; // 0x10
	::System::Single NGCDJGFOGCP; // 0x14
	::System::Single IGEBLGEJHFF; // 0x18
	::System::Single CPJHGHDOIEA; // 0x1C
	::System::Single CLPMJEPOEEK; // 0x20

	::System::Single NAPCGLONBHO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPANFKKFB_NAPCGLONBHO_OFFSET))(this);
	}

	::System::Boolean BDKGGPAJANC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPANFKKFB_BDKGGPAJANC_OFFSET))(this);
	}

	::System::Single OKJCHFGIKBH(::MoleMole::Vehicle::VehicleConfig* DFMKILICPFB, ::MoleMole::Vehicle::VehicleControlInput& HLFFCMIFFIB, ::ACFKPBFKCLE& FOEMDFOPJKJ, ::DDHCAGGGJJP* GHCOEDNLNDN, ::UnityEngine::Vector3 HOEBKFOOOPI, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Vehicle::VehicleConfig*, ::MoleMole::Vehicle::VehicleControlInput&, ::ACFKPBFKCLE&, ::DDHCAGGGJJP*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IJIPANFKKFB_OKJCHFGIKBH_OFFSET))(this, DFMKILICPFB, HLFFCMIFFIB, FOEMDFOPJKJ, GHCOEDNLNDN, HOEBKFOOOPI, PBCAAADNEPK);
	}

	::System::Single OGJCIOHFFDA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPANFKKFB_OGJCIOHFFDA_OFFSET))(this);
	}

	::System::Single OCOHHHMHIPM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPANFKKFB_OCOHHHMHIPM_OFFSET))(this);
	}

	::System::Single BPKPKLHFBJO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPANFKKFB_BPKPKLHFBJO_OFFSET))(this);
	}

	::System::Single EGMNKHHDHFI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPANFKKFB_EGMNKHHDHFI_OFFSET))(this);
	}

	::System::Single PBKJFFLABMD(::MoleMole::Vehicle::VehicleConfig* DFMKILICPFB, ::System::Single IEIAJACFCPD)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Vehicle::VehicleConfig*, ::System::Single))((::PBYTE)hIl2Cpp + IJIPANFKKFB_PBKJFFLABMD_OFFSET))(this, DFMKILICPFB, IEIAJACFCPD);
	}
};
