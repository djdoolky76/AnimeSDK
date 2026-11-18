#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;

#define GEJCOLCNCFI_PELBDEKFHJE_GADOCIKNBPD_OFFSET UNITYSDK_OFFSET(0x15F16BF0)
#define GEJCOLCNCFI_PELBDEKFHJE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F16BE0)

inline static constexpr unsigned int GEJCOLCNCFI_PELBDEKFHJE_TypeDefinitionIndex = 47581;

class GEJCOLCNCFI_PELBDEKFHJE : public ::System::Object
{
public:
	::EKGAHGCJOAN* LHPFMGBDFPN; // 0x10
	::System::Int32 OIKFFGKDHME; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJCOLCNCFI_PELBDEKFHJE__CTOR_OFFSET))(this);
	}

	::System::Void GADOCIKNBPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJCOLCNCFI_PELBDEKFHJE_GADOCIKNBPD_OFFSET))(this);
	}
};
