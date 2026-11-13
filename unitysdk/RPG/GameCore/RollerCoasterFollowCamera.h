#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RollerCoasterBaseCamera.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RollerCoasterFollowCamera; }

#define RPG_GAMECORE_ROLLERCOASTERFOLLOWCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF3A3B0)
#define RPG_GAMECORE_ROLLERCOASTERFOLLOWCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EF3A3C0)
#define RPG_GAMECORE_ROLLERCOASTERFOLLOWCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EF3AA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollerCoasterFollowCamera_TypeDefinitionIndex = 16433;

	class RollerCoasterFollowCamera : public ::RPG::GameCore::RollerCoasterBaseCamera
	{
	public:
		::RPG::MVector3 FollowOffset; // 0x18
		::RPG::MVector3 TrackedObjectOffset; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERFOLLOWCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RollerCoasterFollowCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RollerCoasterFollowCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERFOLLOWCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RollerCoasterFollowCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RollerCoasterFollowCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERFOLLOWCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
