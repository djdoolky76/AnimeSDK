#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BouncyProjectileData; }

#define RPG_GAMECORE_BOUNCYPROJECTILEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D44A200)
#define RPG_GAMECORE_BOUNCYPROJECTILEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D44A220)
#define RPG_GAMECORE_BOUNCYPROJECTILEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D44A1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BouncyProjectileData_TypeDefinitionIndex = 15661;

	class BouncyProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Single Bounciness; // 0xB8
		::System::Single MaxLifeTime; // 0xBC
		::System::Single Gravity; // 0xC0
		::System::Single CollisionEnableDelay; // 0xC4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOUNCYPROJECTILEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BouncyProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BouncyProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOUNCYPROJECTILEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BouncyProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BouncyProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOUNCYPROJECTILEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
