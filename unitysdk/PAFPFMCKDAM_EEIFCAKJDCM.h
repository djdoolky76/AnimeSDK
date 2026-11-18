#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSpecialEffectHitWall; }

#define PAFPFMCKDAM_EEIFCAKJDCM_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x15FF7E80)
#define PAFPFMCKDAM_EEIFCAKJDCM_HOLMEPGEFBO_OFFSET UNITYSDK_OFFSET(0x15FF8010)
#define PAFPFMCKDAM_EEIFCAKJDCM__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF7E70)

inline static constexpr unsigned int PAFPFMCKDAM_EEIFCAKJDCM_TypeDefinitionIndex = 67117;

class PAFPFMCKDAM_EEIFCAKJDCM : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFPFMCKDAM_EEIFCAKJDCM__CTOR_OFFSET))(this);
	}

	::System::Void FLIAEJGDMLI(::MoleMole::Config::ConfigSpecialEffectHitWall* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSpecialEffectHitWall*))((::PBYTE)hIl2Cpp + PAFPFMCKDAM_EEIFCAKJDCM_FLIAEJGDMLI_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::Config::ConfigSpecialEffectHitWall* HOLMEPGEFBO()
	{
		return ((::MoleMole::Config::ConfigSpecialEffectHitWall*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFPFMCKDAM_EEIFCAKJDCM_HOLMEPGEFBO_OFFSET))(this);
	}
};
