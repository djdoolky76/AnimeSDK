#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class HalfBoomerangProjectileData; }

#define RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D752630)
#define RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7526E0)
#define RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D752560)

namespace RPG::GameCore
{
	class HalfBoomerangProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BoomerangAngleRoll; // 0xB8
		::RPG::GameCore::DynamicFloat* BoomerangEccentricity; // 0xC0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HalfBoomerangProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HalfBoomerangProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HalfBoomerangProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HalfBoomerangProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
