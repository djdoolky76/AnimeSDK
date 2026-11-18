#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class VNoiseSettings; }

#define PKOEPBCCMAB_BNBIMOBGBJJ_KLJCGDKMPPM_OFFSET UNITYSDK_OFFSET(0x150D3EB0)
#define PKOEPBCCMAB_BNBIMOBGBJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x150D3EA0)

inline static constexpr unsigned int PKOEPBCCMAB_BNBIMOBGBJJ_TypeDefinitionIndex = 88359;

class PKOEPBCCMAB_BNBIMOBGBJJ : public ::System::Object
{
public:
	::MoleMole::Cameras::VNoiseSettings* LJBPECKCCEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOEPBCCMAB_BNBIMOBGBJJ__CTOR_OFFSET))(this);
	}

	::System::Void KLJCGDKMPPM(::MoleMole::Cameras::VNoiseSettings* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::VNoiseSettings*))((::PBYTE)hIl2Cpp + PKOEPBCCMAB_BNBIMOBGBJJ_KLJCGDKMPPM_OFFSET))(this, DFMKILICPFB);
	}
};
