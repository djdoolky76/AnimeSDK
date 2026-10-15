#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneTransition.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimZoneBaseConfig; }
namespace RPG::GameCore { class AnimatorStateZoneRangeConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMATORSTATEZONERANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F5300)
#define RPG_GAMECORE_ANIMATORSTATEZONERANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F50E0)

namespace RPG::GameCore
{
	class AnimatorStateZoneRangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AnimatorStateName; // 0x10
		::System::Single NormalizedTimeStart; // 0x18
		::System::Single NormalizedTimeEnd; // 0x1C
		::RPG::GameCore::AnimZoneTransition TransitionType; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::AnimZoneBaseConfig*>* ZoneConfigList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEZONERANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimatorStateZoneRangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimatorStateZoneRangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEZONERANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
