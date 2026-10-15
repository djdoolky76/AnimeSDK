#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectDurationConfig; }
namespace RPG::GameCore { class SingleElationSkillResBakeConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SINGLEELATIONSKILLRESBAKECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEB480)
#define RPG_GAMECORE_SINGLEELATIONSKILLRESBAKECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEB250)

namespace RPG::GameCore
{
	class SingleElationSkillResBakeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SkillName; // 0x10
		::System::String* AnimName; // 0x18
		::System::Single AnimDuration; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* TimelinePath; // 0x28
		::System::Single TimelineDuration; // 0x30
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::GameCore::EffectDurationConfig*>* EffectDurations; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEELATIONSKILLRESBAKECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SingleElationSkillResBakeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SingleElationSkillResBakeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEELATIONSKILLRESBAKECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
