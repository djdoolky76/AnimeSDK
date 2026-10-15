#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FollowWithDetectProjectileData; }

#define RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E7D00)
#define RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E7D10)
#define RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E7CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FollowWithDetectProjectileData_TypeDefinitionIndex = 15665;

	class FollowWithDetectProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Single CollisionEnableDelay; // 0xB8
		::System::Single MaxLifeTime; // 0xBC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FollowWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FollowWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FollowWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FollowWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWWITHDETECTPROJECTILEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
