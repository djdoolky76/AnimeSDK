#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJGJLKEAMBG.h"

#define FGCMGAIGAFJ_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x11C48C30)
#define FGCMGAIGAFJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11C48CD0)
#define FGCMGAIGAFJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11C48B50)
#define FGCMGAIGAFJ_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x11C48CE0)
#define FGCMGAIGAFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11C48CC0)

inline static constexpr unsigned int FGCMGAIGAFJ_TypeDefinitionIndex = 83105;

class FGCMGAIGAFJ : public ::CJGJLKEAMBG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCMGAIGAFJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCMGAIGAFJ_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGCMGAIGAFJ_DFJPMOOOLHM_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCMGAIGAFJ_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void PBGJKMAEINN(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGCMGAIGAFJ_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI);
	}
};
