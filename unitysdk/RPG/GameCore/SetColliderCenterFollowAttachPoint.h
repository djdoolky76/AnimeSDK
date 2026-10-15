#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetColliderCenterFollowAttachPoint; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETCOLLIDERCENTERFOLLOWATTACHPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9CA30)
#define RPG_GAMECORE_SETCOLLIDERCENTERFOLLOWATTACHPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9CA70)
#define RPG_GAMECORE_SETCOLLIDERCENTERFOLLOWATTACHPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9C9D0)

namespace RPG::GameCore
{
	class SetColliderCenterFollowAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AttachPoint; // 0x20
		::System::Boolean VerticalFollow; // 0x28
		::System::Boolean HorizontalFollow; // 0x29
		::System::Boolean IsReset; // 0x2A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOLLIDERCENTERFOLLOWATTACHPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetColliderCenterFollowAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetColliderCenterFollowAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOLLIDERCENTERFOLLOWATTACHPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetColliderCenterFollowAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetColliderCenterFollowAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOLLIDERCENTERFOLLOWATTACHPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
