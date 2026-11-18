#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCLAADKAKGP.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigTargetValue; }

#define DPDADFGDKBI_CEGAIGLPBJN_OFFSET UNITYSDK_OFFSET(0x363220)
#define DPDADFGDKBI_EFCOOIJBCNM_OFFSET UNITYSDK_OFFSET(0x3E3EF0)
#define DPDADFGDKBI_LOHCNELPAHA_OFFSET UNITYSDK_OFFSET(0x3E3F90)
#define DPDADFGDKBI_MLOFCAICGJO_OFFSET UNITYSDK_OFFSET(0x3E3F40)

inline static constexpr unsigned int DPDADFGDKBI_TypeDefinitionIndex = 39511;

struct alignas(8) DPDADFGDKBI
{
	::System::Single PMHEECGGALJ; // 0x10
	::System::Single GHIAOCDMPDF; // 0x14
	::System::Single NGKKHJLLFCO; // 0x18
	::System::Byte _padding0[0x4];
	::System::Double APJIINNPLHG; // 0x20
	::System::Single MPAAJAIEHOE; // 0x28
	::System::Boolean LKFGPFIIKCN; // 0x2C
	::System::Byte _padding1[0x3];
	::MoleMole::Config::ConfigTargetValue* OBFHKMINPEJ; // 0x30
	::NCLAADKAKGP PBEBGMEDGCE; // 0x38

	::NCLAADKAKGP EFCOOIJBCNM()
	{
		return ((::NCLAADKAKGP(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDADFGDKBI_EFCOOIJBCNM_OFFSET))(this);
	}

	::System::Void MLOFCAICGJO(::NCLAADKAKGP EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NCLAADKAKGP))((::PBYTE)hIl2Cpp + DPDADFGDKBI_MLOFCAICGJO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 LOHCNELPAHA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDADFGDKBI_LOHCNELPAHA_OFFSET))(this);
	}

	::System::UInt32 CEGAIGLPBJN()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDADFGDKBI_CEGAIGLPBJN_OFFSET))(this);
	}
};
