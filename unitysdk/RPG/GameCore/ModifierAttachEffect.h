#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicVector3; }
namespace RPG::GameCore { class ModifierAttachEffect; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFIERATTACHEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88C090)
#define RPG_GAMECORE_MODIFIERATTACHEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D88C0A0)
#define RPG_GAMECORE_MODIFIERATTACHEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D88C050)

namespace RPG::GameCore
{
	class ModifierAttachEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Flags; // 0x20
		::System::String* EffectPath; // 0x28
		::System::String* AttachPoint; // 0x30
		::RPG::GameCore::DynamicVector3* PositionOffset; // 0x38
		::RPG::GameCore::DynamicVector3* RotationOffset; // 0x40
		::System::Single Delay; // 0x48
		::System::Boolean AddColliderHeightOffset; // 0x4C
		::System::Byte _padding0[0x3];
		::System::Single ColliderHeightRatio; // 0x50
		::System::Single MinMutexTime; // 0x54
		::RPG::GameCore::EffectMutexType MutexType; // 0x58
		::System::UInt32 MaxMutexCount; // 0x5C
		::System::String* UniqueEffectName; // 0x60
		::System::Boolean AutoHideInSkill; // 0x68
		::System::Boolean IgnoreFadeOutMutexError; // 0x69
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERATTACHEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierAttachEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierAttachEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERATTACHEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierAttachEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierAttachEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERATTACHEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
