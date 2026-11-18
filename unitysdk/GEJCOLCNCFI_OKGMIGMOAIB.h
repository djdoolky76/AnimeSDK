#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GEJCOLCNCFI_OKGMIGMOAIB_DKIGGMKGEKN_OFFSET UNITYSDK_OFFSET(0x13251C80)
#define GEJCOLCNCFI_OKGMIGMOAIB__CTOR_OFFSET UNITYSDK_OFFSET(0x13251C70)

inline static constexpr unsigned int GEJCOLCNCFI_OKGMIGMOAIB_TypeDefinitionIndex = 47582;

class GEJCOLCNCFI_OKGMIGMOAIB : public ::System::Object
{
public:
	::System::Int32 PKMFBJMJCOO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJCOLCNCFI_OKGMIGMOAIB__CTOR_OFFSET))(this);
	}

	::System::Void DKIGGMKGEKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJCOLCNCFI_OKGMIGMOAIB_DKIGGMKGEKN_OFFSET))(this);
	}
};
