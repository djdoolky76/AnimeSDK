#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;

#define GEJCOLCNCFI_LAOODJDIHPE_BHCEKOIEPCO_OFFSET UNITYSDK_OFFSET(0x166099C0)
#define GEJCOLCNCFI_LAOODJDIHPE__CTOR_OFFSET UNITYSDK_OFFSET(0x166099B0)

inline static constexpr unsigned int GEJCOLCNCFI_LAOODJDIHPE_TypeDefinitionIndex = 47583;

class GEJCOLCNCFI_LAOODJDIHPE : public ::System::Object
{
public:
	::EKGAHGCJOAN* LHPFMGBDFPN; // 0x10
	::System::Int32 OIKFFGKDHME; // 0x18
	::System::Int32 CDLNHHGGFJE; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJCOLCNCFI_LAOODJDIHPE__CTOR_OFFSET))(this);
	}

	::System::Void BHCEKOIEPCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJCOLCNCFI_LAOODJDIHPE_BHCEKOIEPCO_OFFSET))(this);
	}
};
