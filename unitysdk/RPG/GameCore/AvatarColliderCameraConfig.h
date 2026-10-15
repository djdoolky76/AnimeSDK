#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarColliderCameraConfig; }

#define RPG_GAMECORE_AVATARCOLLIDERCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D40DA50)
#define RPG_GAMECORE_AVATARCOLLIDERCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D40D8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarColliderCameraConfig_TypeDefinitionIndex = 16432;

	class AvatarColliderCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single FollowPoleAngleSepcify; // 0x10
		::RPG::MVector3 AimOffset; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCOLLIDERCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarColliderCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarColliderCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCOLLIDERCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
