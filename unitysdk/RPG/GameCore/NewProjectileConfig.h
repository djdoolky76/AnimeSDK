#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AxisType.h"
#include "unitysdk/RPG/GameCore/EaseType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace System { class String; }

#define RPG_GAMECORE_NEWPROJECTILECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A9D40)
#define RPG_GAMECORE_NEWPROJECTILECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8A9DE0)
#define RPG_GAMECORE_NEWPROJECTILECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8A87E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewProjectileConfig_TypeDefinitionIndex = 15656;

	class NewProjectileConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* FlySpeed; // 0x10
		::RPG::GameCore::DynamicFloat* FlyTime; // 0x18
		::System::Single ExtraRetainTime; // 0x20
		::System::Boolean ExtraRetainAlongLastVelocity; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::GameCore::EaseType SpeedEaseType; // 0x28
		::System::Byte _padding1[0x4];
		::System::String* CustomSpeedEaseCurve; // 0x30
		::System::String* HitEffect; // 0x38
		::System::Boolean AlignHitEffect; // 0x40
		::System::Boolean AttachHitEffectToTargetEntity; // 0x41
		::System::Boolean CorrectedWhenTargetFormationChange; // 0x42
		::System::Byte _padding2[0x1];
		::RPG::MVector3 InitDirection; // 0x44
		::System::String* AttachPoint; // 0x50
		::RPG::MVector3 AttachOffset; // 0x58
		::System::Boolean StartFromLastHitPos; // 0x64
		::System::Boolean FreezeRotation; // 0x65
		::System::Byte _padding3[0x2];
		::System::String* TargetAttachPoint; // 0x68
		::System::String* TargetAttachPoint2; // 0x70
		::RPG::MVector3 TargetOffset; // 0x78
		::System::Boolean UseLookat; // 0x84
		::System::Boolean UseLastHitVelocity; // 0x85
		::System::Boolean AlignWithAttachPoint; // 0x86
		::System::Byte _padding4[0x1];
		::RPG::GameCore::AxisType AttachPointAxis; // 0x88
		::System::Boolean IgnoreTargetHitbox; // 0x8C
		::System::Boolean IgnoreCasterWallCheck; // 0x8D
		::System::Byte _padding5[0x2];
		::System::String* ColliderTemplate; // 0x90
		::System::Boolean EnableRayCast; // 0x98
		::System::Byte _padding6[0x7];
		::System::String* FlyEffectUniqueName; // 0xA0
		::System::String* FlyEffect; // 0xA8
		::System::Boolean FlyEffectFadeOut; // 0xB0
		::System::Boolean TriggerHitCallback; // 0xB1
		::System::Boolean WriteProgressToEffectAnimator; // 0xB2
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWPROJECTILECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NewProjectileConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWPROJECTILECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NewProjectileConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWPROJECTILECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
