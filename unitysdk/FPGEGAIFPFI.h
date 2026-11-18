#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAPOADBOJLK.h"

class ALAGDAJALHD;

#define FPGEGAIFPFI_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x116C4FA0)
#define FPGEGAIFPFI_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x116C4E40)
#define FPGEGAIFPFI__CTOR_OFFSET UNITYSDK_OFFSET(0x116C4D70)

inline static constexpr unsigned int FPGEGAIFPFI_TypeDefinitionIndex = 69642;

class FPGEGAIFPFI : public ::HAPOADBOJLK
{
public:
	::System::Void _ctor(::ALAGDAJALHD* FCPGJNLBFMO)
	{
		return ((::System::Void(*)(::PVOID, ::ALAGDAJALHD*))((::PBYTE)hIl2Cpp + FPGEGAIFPFI__CTOR_OFFSET))(this, FCPGJNLBFMO);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGEGAIFPFI_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGEGAIFPFI_CNIKAMOAANF_OFFSET))(this);
	}
};
