#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindCameraShakeConfig; }
namespace RPG::GameCore { class VCameraOverrideShakeV2; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDCAMERASHAKECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB87010)
#define RPG_GAMECORE_TIMEREWINDCAMERASHAKECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB86E90)

namespace RPG::GameCore
{
	class TimeRewindCameraShakeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ShakeTemplateName; // 0x10
		::RPG::GameCore::VCameraOverrideShakeV2* OverrideShakeConfigV2; // 0x18
		::RPG::GameCore::VCameraShakeV2* ShakeConfigV2; // 0x20
		::System::Single ShakeDuration; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCAMERASHAKECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindCameraShakeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindCameraShakeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCAMERASHAKECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
