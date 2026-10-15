#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PingPongProjectileType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongProjectileGroup; }
namespace RPG::GameCore { class PingPongProjectileInfo; }

#define RPG_GAMECORE_PINGPONGPROJECTILEGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D918820)
#define RPG_GAMECORE_PINGPONGPROJECTILEGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D918680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongProjectileGroup_TypeDefinitionIndex = 16987;

	class PingPongProjectileGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PingPongProjectileType Type; // 0x10
		::System::Single CD; // 0x14
		::Il2CppArray<::RPG::GameCore::PingPongProjectileInfo*>* ProjectileList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPROJECTILEGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongProjectileGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongProjectileGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPROJECTILEGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
