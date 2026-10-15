#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimGrenadierAttackType.h"
#include "unitysdk/RPG/GameCore/FiveDimGrenadierTargetType.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleProjectileMoveType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimGrenadierProjectileConfig; }
namespace RPG::GameCore { class FiveDimGrenadierPropSpawnerParam; }

#define RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C3E30)
#define RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C3E40)
#define RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C3DF0)

namespace RPG::GameCore
{
	class FiveDimGrenadierPropSpawnerParam : public ::RPG::GameCore::FiveDimPropSpawnerParam
	{
	public:
		::System::Boolean EnableOverrideMoveSpeed; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single MoveSpeedOverride; // 0x14
		::System::Boolean EnableOverrideTraceAcceleration; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single TraceAccelerationOverride; // 0x1C
		::System::Boolean EnableOverrideTraceDeceleration; // 0x20
		::System::Byte _padding2[0x3];
		::System::Single TraceDecelerationOverride; // 0x24
		::System::Boolean EnableOverrideAttackDistance; // 0x28
		::System::Byte _padding3[0x3];
		::System::Single AttackDistance; // 0x2C
		::System::Boolean EnableOverrideAttackInterval; // 0x30
		::System::Byte _padding4[0x3];
		::System::Single AttackInterval; // 0x34
		::System::Boolean EnableOverrideAttackType; // 0x38
		::System::Byte _padding5[0x3];
		::RPG::GameCore::FiveDimGrenadierAttackType AttackType; // 0x3C
		::System::Boolean EnableOverrideProjectileMoveType; // 0x40
		::System::Byte _padding6[0x3];
		::RPG::GameCore::FiveDimSimpleProjectileMoveType ProjectileMoveType; // 0x44
		::System::Single ParabolaHeightOffset; // 0x48
		::System::Single LaunchSpeed; // 0x4C
		::System::Boolean EnableOverrideProjectileConfigList; // 0x50
		::System::Byte _padding7[0x7];
		::Il2CppArray<::RPG::GameCore::FiveDimGrenadierProjectileConfig*>* ProjectileConfigList; // 0x58
		::RPG::GameCore::FiveDimOrthoDirection Direction; // 0x60
		::RPG::GameCore::FiveDimGrenadierTargetType TargetType; // 0x64
		::System::UInt32 CustomTargetID; // 0x68
		::System::Single StartOffset; // 0x6C
		::System::Single EndOffset; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGrenadierPropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGrenadierPropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGrenadierPropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGrenadierPropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERPROPSPAWNERPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
