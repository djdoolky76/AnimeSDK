#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHBKHOAINBN.h"

namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }

#define LOCJLOJJDOP_BNBIALCNFOL_OFFSET UNITYSDK_OFFSET(0x18513D00)
#define LOCJLOJJDOP_BNMBOCMKDLJ_OFFSET UNITYSDK_OFFSET(0x18513AE0)
#define LOCJLOJJDOP_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x18513DA0)
#define LOCJLOJJDOP_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x18513E70)
#define LOCJLOJJDOP_HOHBEEPMOCH_OFFSET UNITYSDK_OFFSET(0x18513ED0)
#define LOCJLOJJDOP_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x18513EE0)
#define LOCJLOJJDOP_IOMDPLCMDDM_OFFSET UNITYSDK_OFFSET(0x18513F70)
#define LOCJLOJJDOP_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x18514000)
#define LOCJLOJJDOP__CTOR_OFFSET UNITYSDK_OFFSET(0x18513AD0)

inline static constexpr unsigned int LOCJLOJJDOP_TypeDefinitionIndex = 77385;

class LOCJLOJJDOP : public ::DHBKHOAINBN
{
public:
	::System::Boolean CMNFNGMMKKN; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single DILHBMGHBOE; // 0x1C

	::System::Void _ctor(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* IPNBLOIANBJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*))((::PBYTE)hIl2Cpp + LOCJLOJJDOP__CTOR_OFFSET))(this, IPNBLOIANBJ);
	}

	::System::Void BNMBOCMKDLJ(::System::Int32 MECCCNJCNKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LOCJLOJJDOP_BNMBOCMKDLJ_OFFSET))(this, MECCCNJCNKO);
	}

	::System::Void BNBIALCNFOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCJLOJJDOP_BNBIALCNFOL_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOCJLOJJDOP_DFJPMOOOLHM_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCJLOJJDOP_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void HOHBEEPMOCH(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LOCJLOJJDOP_HOHBEEPMOCH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCJLOJJDOP_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void IOMDPLCMDDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCJLOJJDOP_IOMDPLCMDDM_OFFSET))(this);
	}

	::System::Void PBGJKMAEINN(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOCJLOJJDOP_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI);
	}
};
