#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleProjectileMoveType.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSimpleProjectilePropSpawnerParam; }
namespace RPG::GameCore { class FiveDimSimpleProjectileRandomVelItem; }

#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A8270)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A8280)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AE630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleProjectilePropSpawnerParam_TypeDefinitionIndex = 18589;

	class FiveDimSimpleProjectilePropSpawnerParam : public ::RPG::GameCore::FiveDimPropSpawnerParam
	{
	public:
		::RPG::GameCore::FiveDimSimpleProjectileMoveType MoveType; // 0x10
		::RPG::MVector3 InitVelocityLocal; // 0x14
		::RPG::GameCore::FiveDimSimpleProjectileRandomVelItem* RandVelBound; // 0x20
		::System::Boolean UseExtraRandomVelBound; // 0x28
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::FiveDimSimpleProjectileRandomVelItem*>* ExtraVelBoundList; // 0x30
		::System::Single GravityAcc; // 0x38
		::System::Boolean EnableOverrideProjectileLifeTime; // 0x3C
		::System::Byte _padding1[0x3];
		::System::Single LifeTime; // 0x40
		::System::Boolean OverrideProjectileSpawnerUnique; // 0x44
		::System::Boolean IsUnique; // 0x45
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSimpleProjectilePropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSimpleProjectilePropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSimpleProjectilePropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSimpleProjectilePropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEPROPSPAWNERPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
