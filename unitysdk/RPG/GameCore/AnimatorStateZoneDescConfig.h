#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneTransition.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimationZone; }
namespace RPG::GameCore { class AnimatorStateZoneDescConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMATORSTATEZONEDESCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F5000)
#define RPG_GAMECORE_ANIMATORSTATEZONEDESCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F4E90)

namespace RPG::GameCore
{
	class AnimatorStateZoneDescConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StateName; // 0x10
		::RPG::GameCore::AnimZoneTransition TransitionType; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::AnimationZone*>* ZoneList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEZONEDESCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimatorStateZoneDescConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimatorStateZoneDescConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEZONEDESCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
