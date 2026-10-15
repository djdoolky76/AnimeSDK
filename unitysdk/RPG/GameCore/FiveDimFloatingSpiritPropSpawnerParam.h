#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimFloatingSpiritPropSpawnerParam; }
namespace RPG::GameCore { class FloatingSpiritBlock; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BE970)
#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BE980)
#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BE940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFloatingSpiritPropSpawnerParam_TypeDefinitionIndex = 18580;

	class FiveDimFloatingSpiritPropSpawnerParam : public ::RPG::GameCore::FiveDimPropSpawnerParam
	{
	public:
		::System::Boolean IsFollowBeat; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FiveDimOrthoDirection InitDirection; // 0x14
		::System::Boolean InitMoveRight; // 0x18
		::System::Boolean InitMoveUp; // 0x19
		::System::Boolean EnableOverrideMoveSpeed; // 0x1A
		::System::Byte _padding1[0x1];
		::System::Single MoveSpeedOverride; // 0x1C
		::RPG::MVector3 Position1; // 0x20
		::RPG::MVector3 Position2; // 0x2C
		::System::UInt16 BeatCount; // 0x38
		::System::UInt16 StartIndex; // 0x3A
		::System::Boolean StartMoveBackward; // 0x3C
		::System::Boolean BindLevelVarBlock; // 0x3D
		::System::Byte _padding2[0x2];
		::RPG::GameCore::LittleGameDynamicVar* BindLevelVarName; // 0x40
		::Il2CppArray<::RPG::GameCore::FloatingSpiritBlock*>* LevelVarBlockIndex; // 0x48
		::System::Boolean HasAttachEntity; // 0x50
		::System::Byte _padding3[0x3];
		::System::UInt32 AttachEntityID; // 0x54
		::System::String* AttachPointName; // 0x58
		::RPG::MVector3 AttachRotationOffset; // 0x60
		::RPG::MVector3 AttachPositionOffset; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITPROPSPAWNERPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
