#pragma once
#include "unitysdk/unitysdk.h"
class OBFADADBJHB;
namespace RPG::GameCore { class GameEntity; }

#define OBFADADBJHB_LDHPKHDCGAB_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x22CF0)
#define OBFADADBJHB_LDHPKHDCGAB_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x22D50)

inline static constexpr unsigned int OBFADADBJHB_LDHPKHDCGAB_TypeDefinitionIndex = 76884;

	struct alignas(8) OBFADADBJHB_LDHPKHDCGAB
	{
		::OBFADADBJHB* CDBFKCOGHNL; // 0x10
		::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBFADADBJHB_LDHPKHDCGAB_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
		}

		::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBFADADBJHB_LDHPKHDCGAB_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
		}

	};
