#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/EffectParamEntityUsage.h"
#include "unitysdk/RPG/GameCore/EffectScaleAdaptType.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class EffectModifyData; }
namespace RPG::GameCore { class OverrideMonoEffectConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerEffect; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGEREFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC46950)
#define RPG_GAMECORE_TRIGGEREFFECT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC494E0)
#define RPG_GAMECORE_TRIGGEREFFECT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC49050)
#define RPG_GAMECORE_TRIGGEREFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC469A0)
#define RPG_GAMECORE_TRIGGEREFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC46650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffect_TypeDefinitionIndex = 20268;

	class TriggerEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsAttachToTargetEntity; // 0x20
		::System::Boolean IsAttachToTimeline; // 0x21
		::System::Boolean IsActiveLevelUpOverride; // 0x22
		::System::Boolean IsHideTargetEntityWhenLoading; // 0x23
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Flags; // 0x28
		::System::Boolean AliveOnly; // 0x30
		::System::Byte _padding1[0x7];
		::System::String* EffectPathKey; // 0x38
		::System::String* EffectPath; // 0x40
		::System::String* UniqueEffectName; // 0x48
		::System::String* AttachPoint; // 0x50
		::RPG::MVector3 PositionOffset; // 0x58
		::RPG::MVector3 RotationOffset; // 0x64
		::RPG::MVector3 Scale; // 0x70
		::System::Byte _padding2[0x4];
		::RPG::GameCore::DynamicFloat* ParameterScale; // 0x80
		::RPG::GameCore::EffectScaleAdaptType ScaleAdaptType; // 0x88
		::System::Single Delay; // 0x8C
		::RPG::GameCore::DynamicFloat* DynamicDelay; // 0x90
		::System::Boolean IsNeedFadeIn; // 0x98
		::System::Boolean IsEnableReplay; // 0x99
		::System::Boolean ForceSimulateImmediately; // 0x9A
		::System::Byte _padding3[0x5];
		::RPG::GameCore::OverrideMonoEffectConfig* OverrideMonoEffectConfig; // 0xA0
		::System::Boolean AddColliderHeightOffset; // 0xA8
		::System::Byte _padding4[0x7];
		::RPG::GameCore::DynamicFloat* PositionOffsetRatio; // 0xB0
		::RPG::GameCore::DynamicFloat* PositionOffsetDeltaX; // 0xB8
		::RPG::GameCore::DynamicFloat* PositionOffsetDeltaY; // 0xC0
		::RPG::GameCore::DynamicFloat* PositionOffsetDeltaZ; // 0xC8
		::RPG::GameCore::DynamicFloat* DynamicPitch; // 0xD0
		::RPG::GameCore::DynamicFloat* DynamicYaw; // 0xD8
		::RPG::GameCore::DynamicFloat* DynamicRoll; // 0xE0
		::RPG::GameCore::EffectParamEntityUsage ParamEntityUsage; // 0xE8
		::System::Byte _padding5[0x4];
		::RPG::GameCore::TargetEvaluator* TowardTarget; // 0xF0
		::System::String* TowardAttachPoint; // 0xF8
		::System::Boolean TowardRotatePitchOnly; // 0x100
		::System::Byte _padding6[0x3];
		::System::Single TowardMaxPitchAngle; // 0x104
		::Il2CppArray<::RPG::GameCore::EffectModifyData*>* SubObjectModifyDataList; // 0x108
		::System::Boolean IsAttachToCaster; // 0x110
		::System::Boolean ExecuteOnSkip; // 0x111
		::System::Byte _padding7[0x2];
		::System::Single MinMutexTime; // 0x114
		::RPG::GameCore::EffectMutexType MinMutexType; // 0x118
		::System::UInt32 MaxMutexCount; // 0x11C
		::System::Boolean IgnoreFadeOutMutexError; // 0x120
		::System::Boolean SyncPropState; // 0x121
		::System::Byte _padding8[0x6];
		::System::String* InitEffectState; // 0x128
		::System::Boolean FollowCasterTimeSlow; // 0x130
		::System::Byte _padding9[0x7];
		::RPG::GameCore::DynamicFloat* TimeScale; // 0x138
		::System::String* AudioSwitchGroup; // 0x140
		::System::String* AudioSwitchName; // 0x148
		::System::Boolean ForbidLod; // 0x150
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
