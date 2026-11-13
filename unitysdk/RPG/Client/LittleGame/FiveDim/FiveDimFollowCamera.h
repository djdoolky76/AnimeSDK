#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimMonoCamera.h"
namespace Cinemachine { class CinemachineFramingTransposer; }
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimCinemachineMoveFollowTargetInSpecificSpace; }
namespace RPG::GameCore { class FiveDimCameraFollowConfig; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C38B930)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_ENABLEFOLLOWDAMPENTITYMOVE_OFFSET UNITYSDK_OFFSET(0x1C38B680)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_GETDESIREDCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x1C38B090)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_NAIFNNNEHJB_OFFSET UNITYSDK_OFFSET(0x1C38B0F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C38ABE0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETBIASY_OFFSET UNITYSDK_OFFSET(0x1C38B5D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETDAMPINENTITYSPACE_OFFSET UNITYSDK_OFFSET(0x1C38AC50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETDAMPINGY_OFFSET UNITYSDK_OFFSET(0x1C38B220)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETDESIREDCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x1C38B1B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETFOLLOWCONFIG_OFFSET UNITYSDK_OFFSET(0x1C38B290)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETSCREENY_OFFSET UNITYSDK_OFFSET(0x1C38B560)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETVIEWHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C38B760)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFollowCamera_TypeDefinitionIndex = 79197;

	class FiveDimFollowCamera : public ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera
	{
	public:
		::RPG::Client::LittleGame::FiveDim::FiveDimCinemachineMoveFollowTargetInSpecificSpace* OIAKIEPADBF; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_CTOR_OFFSET))(this);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_RELEASE_OFFSET))(this, a1);
		}

		::System::Single GetDesiredCameraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_GETDESIREDCAMERADISTANCE_OFFSET))(this);
		}

		::System::Void SetDesiredCameraDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETDESIREDCAMERADISTANCE_OFFSET))(this, a1);
		}

		::System::Void SetDampingY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETDAMPINGY_OFFSET))(this, a1);
		}

		::System::Void SetFollowConfig(::RPG::GameCore::FiveDimCameraFollowConfig* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETFOLLOWCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void SetScreenY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETSCREENY_OFFSET))(this, a1);
		}

		::System::Void SetBiasY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETBIASY_OFFSET))(this, a1);
		}

		::System::Void SetDampInEntitySpace(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETDAMPINENTITYSPACE_OFFSET))(this, a1);
		}

		::System::Void EnableFollowDampEntityMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_ENABLEFOLLOWDAMPENTITYMOVE_OFFSET))(this);
		}

		::System::Void SetViewHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_SETVIEWHEIGHT_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineFramingTransposer* NAIFNNNEHJB()
		{
			return ((::Cinemachine::CinemachineFramingTransposer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFOLLOWCAMERA_NAIFNNNEHJB_OFFSET))(this);
		}

	};
}
