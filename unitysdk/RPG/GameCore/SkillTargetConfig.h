#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ServantSelectType.h"
#include "unitysdk/RPG/GameCore/SkillSubTargetType.h"
#include "unitysdk/RPG/GameCore/SkillTargetAliveState.h"
#include "unitysdk/RPG/GameCore/SkillTargetType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SkillTargetConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLTARGETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEFF40)
#define RPG_GAMECORE_SKILLTARGETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEE3C0)

namespace RPG::GameCore
{
	class SkillTargetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SkillTargetType TargetType; // 0x10
		::RPG::GameCore::SkillSubTargetType SubTargetType; // 0x14
		::RPG::GameCore::TargetEvaluator* TargetFilter; // 0x18
		::System::Int32 AdjoinSubTargetCount; // 0x20
		::System::Boolean IncludeAllRowsSubTarget; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID InvalidTargetMessage; // 0x28
		::System::String* InvalidTargetMessageIcon; // 0x38
		::System::Int32 MaxTargetCount; // 0x40
		::RPG::GameCore::SkillTargetAliveState AliveState; // 0x44
		::System::Boolean AvoidSelf; // 0x48
		::System::Byte _padding1[0x3];
		::RPG::GameCore::ServantSelectType AllowFriendServant; // 0x4C
		::RPG::GameCore::ServantSelectType AllowEnemyServant; // 0x50
		::System::Boolean AllowUnselectableTarget; // 0x54
		::System::Boolean MergeServantSelectToSummoner; // 0x55
		::System::Boolean IsDynamicTarget; // 0x56
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLTARGETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillTargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLTARGETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
