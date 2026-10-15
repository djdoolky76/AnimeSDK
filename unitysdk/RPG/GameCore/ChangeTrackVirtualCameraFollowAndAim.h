#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeTrackVirtualCameraFollowAndAim; }
namespace System { class String; }

#define RPG_GAMECORE_CHANGETRACKVIRTUALCAMERAFOLLOWANDAIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D568820)
#define RPG_GAMECORE_CHANGETRACKVIRTUALCAMERAFOLLOWANDAIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D568830)
#define RPG_GAMECORE_CHANGETRACKVIRTUALCAMERAFOLLOWANDAIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5687F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeTrackVirtualCameraFollowAndAim_TypeDefinitionIndex = 21694;

	class ChangeTrackVirtualCameraFollowAndAim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* TrackName; // 0x20
		::System::String* CameraName; // 0x28
		::System::String* TargetAreaName; // 0x30
		::System::String* FollowTargetAnchorName; // 0x38
		::System::String* LookAtTargetAnchorName; // 0x40
		::System::UInt32 FollowTargetGroupID; // 0x48
		::System::UInt32 FollowTargetEntityID; // 0x4C
		::System::UInt32 LookAtTargetGroupID; // 0x50
		::System::UInt32 LookAtTargetEntityID; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETRACKVIRTUALCAMERAFOLLOWANDAIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeTrackVirtualCameraFollowAndAim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeTrackVirtualCameraFollowAndAim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETRACKVIRTUALCAMERAFOLLOWANDAIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeTrackVirtualCameraFollowAndAim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeTrackVirtualCameraFollowAndAim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETRACKVIRTUALCAMERAFOLLOWANDAIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
