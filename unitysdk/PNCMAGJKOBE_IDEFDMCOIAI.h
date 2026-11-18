#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class PNCMAGJKOBE_LJEODGLEIOJ;
namespace MoleMole::Config { class ConfigEntitySharedAnimEvents; }

#define PNCMAGJKOBE_IDEFDMCOIAI_KDPEALGAFFK_OFFSET UNITYSDK_OFFSET(0x1CB54250)
#define PNCMAGJKOBE_IDEFDMCOIAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB54240)

inline static constexpr unsigned int PNCMAGJKOBE_IDEFDMCOIAI_TypeDefinitionIndex = 42323;

class PNCMAGJKOBE_IDEFDMCOIAI : public ::System::Object
{
public:
	::Foundation::AssetPath OIIHCACKLHD; // 0x10
	::PNCMAGJKOBE_LJEODGLEIOJ* FGBNBFHOKAA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_IDEFDMCOIAI__CTOR_OFFSET))(this);
	}

	::System::Void KDPEALGAFFK(::MoleMole::Config::ConfigEntitySharedAnimEvents* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntitySharedAnimEvents*))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_IDEFDMCOIAI_KDPEALGAFFK_OFFSET))(this, DFMKILICPFB);
	}
};
