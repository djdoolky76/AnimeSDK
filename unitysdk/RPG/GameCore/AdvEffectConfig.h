#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEffectConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39C350)
#define RPG_GAMECORE_ADVEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39BDF0)

namespace RPG::GameCore
{
	class AdvEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ConfigName; // 0x10
		::System::String* EffectPath; // 0x18
		::System::Boolean FollowTargetAlways; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* AttachPoint; // 0x28
		::RPG::MVector3 PositionOffset; // 0x30
		::RPG::MVector3 RotationOffset; // 0x3C
		::RPG::MVector3 Scale; // 0x48
		::System::Boolean SyncTargetAnimatorParam; // 0x54
		::System::Byte _padding1[0x3];
		::RPG::MVector3 TowardTargetPosition; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
