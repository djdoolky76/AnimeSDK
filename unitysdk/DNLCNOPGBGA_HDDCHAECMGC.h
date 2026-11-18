#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class DNLCNOPGBGA;
namespace MoleMole::Config { class ConfigGlobalSoundAction; }

#define DNLCNOPGBGA_HDDCHAECMGC_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x132A4490)
#define DNLCNOPGBGA_HDDCHAECMGC_JOALDMLOEDI_OFFSET UNITYSDK_OFFSET(0x132A44A0)
#define DNLCNOPGBGA_HDDCHAECMGC__CTOR_OFFSET UNITYSDK_OFFSET(0x132A4480)

inline static constexpr unsigned int DNLCNOPGBGA_HDDCHAECMGC_TypeDefinitionIndex = 38979;

class DNLCNOPGBGA_HDDCHAECMGC : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::DNLCNOPGBGA* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLCNOPGBGA_HDDCHAECMGC__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath BHEKKKNPHAM()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLCNOPGBGA_HDDCHAECMGC_BHEKKKNPHAM_OFFSET))(this);
	}

	::System::Void JOALDMLOEDI(::MoleMole::Config::ConfigGlobalSoundAction* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGlobalSoundAction*))((::PBYTE)hIl2Cpp + DNLCNOPGBGA_HDDCHAECMGC_JOALDMLOEDI_OFFSET))(this, DFMKILICPFB);
	}
};
