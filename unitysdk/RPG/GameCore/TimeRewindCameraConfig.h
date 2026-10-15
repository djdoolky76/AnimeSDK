#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindCameraConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB595A0)
#define RPG_GAMECORE_TIMEREWINDCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB59330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindCameraConfig_TypeDefinitionIndex = 16594;

	class TimeRewindCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 DefaultLookAtOffset; // 0x10
		::System::Single TransitionTime; // 0x1C
		::System::String* LookAtTransitionCurvePath; // 0x20
		::System::String* CameraLookAtOffsetBlendInPath; // 0x28
		::System::String* CameraLookAtOffsetBlendOutPath; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
