#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetLineupPlacementConfig; }

#define RPG_GAMECORE_PETLINEUPPLACEMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D908D00)
#define RPG_GAMECORE_PETLINEUPPLACEMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D908B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetLineupPlacementConfig_TypeDefinitionIndex = 15616;

	class PetLineupPlacementConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single SlotSpacing; // 0x10
		::System::Single RowDistance; // 0x14
		::System::Single TriSideX; // 0x18
		::System::Single TriBackZ; // 0x1C
		::System::Single SlotYaw; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETLINEUPPLACEMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetLineupPlacementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetLineupPlacementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETLINEUPPLACEMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
