#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define PBDLLINMPGK_MMIKJGCLMCC_EGHOHPLPMMN_OFFSET UNITYSDK_OFFSET(0x1AFCDF50)
#define PBDLLINMPGK_MMIKJGCLMCC_ENPOICLMLKB_OFFSET UNITYSDK_OFFSET(0x1AFCDEB0)
#define PBDLLINMPGK_MMIKJGCLMCC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFCDEA0)

inline static constexpr unsigned int PBDLLINMPGK_MMIKJGCLMCC_TypeDefinitionIndex = 79126;

class PBDLLINMPGK_MMIKJGCLMCC : public ::System::Object
{
public:
	::HOCDHMEPPEG ALOPKCMIPBL; // 0x10
	::HOCDHMEPPEG PHJBHGAGIIA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLLINMPGK_MMIKJGCLMCC__CTOR_OFFSET))(this);
	}

	::System::Void ENPOICLMLKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLLINMPGK_MMIKJGCLMCC_ENPOICLMLKB_OFFSET))(this);
	}

	::System::Void EGHOHPLPMMN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLLINMPGK_MMIKJGCLMCC_EGHOHPLPMMN_OFFSET))(this);
	}
};
