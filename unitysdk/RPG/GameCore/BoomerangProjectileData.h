#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoomerangProjectileData; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BOOMERANGPROJECTILEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4493C0)
#define RPG_GAMECORE_BOOMERANGPROJECTILEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D449470)
#define RPG_GAMECORE_BOOMERANGPROJECTILEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4492F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomerangProjectileData_TypeDefinitionIndex = 15657;

	class BoomerangProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BoomerangAngleRoll; // 0xB8
		::RPG::GameCore::DynamicFloat* BoomerangEccentricity; // 0xC0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMERANGPROJECTILEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoomerangProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoomerangProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMERANGPROJECTILEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoomerangProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoomerangProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMERANGPROJECTILEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
