#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformance; }

#define PJJKDONDJKH_MEGHFPEMAGP_HOLMEPGEFBO_OFFSET UNITYSDK_OFFSET(0x1C2B2220)
#define PJJKDONDJKH_MEGHFPEMAGP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B2210)

inline static constexpr unsigned int PJJKDONDJKH_MEGHFPEMAGP_TypeDefinitionIndex = 74165;

class PJJKDONDJKH_MEGHFPEMAGP : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDONDJKH_MEGHFPEMAGP__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigGachaPerformance* HOLMEPGEFBO()
	{
		return ((::MoleMole::Config::ConfigGachaPerformance*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDONDJKH_MEGHFPEMAGP_HOLMEPGEFBO_OFFSET))(this);
	}
};
