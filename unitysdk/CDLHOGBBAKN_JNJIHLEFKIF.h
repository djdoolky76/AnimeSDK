#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class CDLHOGBBAKN_GMMMEPKBJOL;
namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }

#define CDLHOGBBAKN_JNJIHLEFKIF_IMILGKINPPP_OFFSET UNITYSDK_OFFSET(0x139A54D0)
#define CDLHOGBBAKN_JNJIHLEFKIF__CTOR_OFFSET UNITYSDK_OFFSET(0x139A54C0)

inline static constexpr unsigned int CDLHOGBBAKN_JNJIHLEFKIF_TypeDefinitionIndex = 46174;

class CDLHOGBBAKN_JNJIHLEFKIF : public ::System::Object
{
public:
	::CDLHOGBBAKN_GMMMEPKBJOL* FGBNBFHOKAA; // 0x10
	::Foundation::AssetPath OIIHCACKLHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_JNJIHLEFKIF__CTOR_OFFSET))(this);
	}

	::System::Void IMILGKINPPP(::MoleMole::Config::ConfigMaterialPropertyModifierMap* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_JNJIHLEFKIF_IMILGKINPPP_OFFSET))(this, DFMKILICPFB);
	}
};
