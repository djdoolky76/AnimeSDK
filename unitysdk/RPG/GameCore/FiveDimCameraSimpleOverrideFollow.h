#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimCameraSimpleOverrideFollow; }

#define RPG_GAMECORE_FIVEDIMCAMERASIMPLEOVERRIDEFOLLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B41F0)
#define RPG_GAMECORE_FIVEDIMCAMERASIMPLEOVERRIDEFOLLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B2180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCameraSimpleOverrideFollow_TypeDefinitionIndex = 18623;

	class FiveDimCameraSimpleOverrideFollow : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ViewHeight; // 0x10
		::System::Single VCameraPitch; // 0x14
		::System::Boolean FollowPlayerGravity; // 0x18
		::System::Boolean FollowSurfaceMove; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERASIMPLEOVERRIDEFOLLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCameraSimpleOverrideFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCameraSimpleOverrideFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERASIMPLEOVERRIDEFOLLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
