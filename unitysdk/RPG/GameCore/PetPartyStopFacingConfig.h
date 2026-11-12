#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetPartyStopFacingConfig; }

#define RPG_GAMECORE_PETPARTYSTOPFACINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB24790)
#define RPG_GAMECORE_PETPARTYSTOPFACINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EB244C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartyStopFacingConfig_TypeDefinitionIndex = 17762;

	class PetPartyStopFacingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ProbeHeight; // 0x10
		::System::Single FrontExtent; // 0x14
		::System::Single FrontDiagonalExtent; // 0x18
		::System::Single SideExtent; // 0x1C
		::System::Single BackDiagonalExtent; // 0x20
		::System::Single BackExtent; // 0x24
		::System::Single PenetrationTolerance; // 0x28
		::System::Single MinImprovement; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSTOPFACINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyStopFacingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyStopFacingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSTOPFACINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
