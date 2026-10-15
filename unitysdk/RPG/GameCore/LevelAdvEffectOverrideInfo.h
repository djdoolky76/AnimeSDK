#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelAdvEffectOverrideInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELADVEFFECTOVERRIDEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A49A0)
#define RPG_GAMECORE_LEVELADVEFFECTOVERRIDEINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A4290)

namespace RPG::GameCore
{
	class LevelAdvEffectOverrideInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsOverrideEffectPath; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* EffectPath; // 0x18
		::System::Boolean IsOverrideFollowTargetAlways; // 0x20
		::System::Boolean FollowTargetAlways; // 0x21
		::System::Boolean IsOverrideAttachPoint; // 0x22
		::System::Byte _padding1[0x5];
		::System::String* AttachPoint; // 0x28
		::System::Boolean IsOverridePositionOffset; // 0x30
		::System::Byte _padding2[0x3];
		::RPG::MVector3 PositionOffset; // 0x34
		::System::Boolean IsOverrideRotationOffset; // 0x40
		::System::Byte _padding3[0x3];
		::RPG::MVector3 RotationOffset; // 0x44
		::System::Boolean IsOverrideScale; // 0x50
		::System::Byte _padding4[0x3];
		::RPG::MVector3 Scale; // 0x54
		::System::Boolean IsOverrideSyncTargetAnimatorParam; // 0x60
		::System::Boolean SyncTargetAnimatorParam; // 0x61
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELADVEFFECTOVERRIDEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAdvEffectOverrideInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELADVEFFECTOVERRIDEINFO_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
