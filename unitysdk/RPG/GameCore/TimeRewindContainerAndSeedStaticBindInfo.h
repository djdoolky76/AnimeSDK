#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindContainerAndSeedStaticBindInfo; }
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDCONTAINERANDSEEDSTATICBINDINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB59B40)
#define RPG_GAMECORE_TIMEREWINDCONTAINERANDSEEDSTATICBINDINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB598D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindContainerAndSeedStaticBindInfo_TypeDefinitionIndex = 16595;

	class TimeRewindContainerAndSeedStaticBindInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 SeedOffset; // 0x10
		::System::Single SeedTriggerNormalizedTime; // 0x1C
		::System::String* PlatformFinalStateName; // 0x20
		::System::String* PlatformGrowTransitionName; // 0x28
		::System::Single SelectPointTransitionTime; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCONTAINERANDSEEDSTATICBINDINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindContainerAndSeedStaticBindInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindContainerAndSeedStaticBindInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCONTAINERANDSEEDSTATICBINDINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
