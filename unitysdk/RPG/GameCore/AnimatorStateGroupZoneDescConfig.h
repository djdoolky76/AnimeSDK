#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneTransition.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimationZone; }
namespace RPG::GameCore { class AnimatorStateGroupZoneDescConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMATORSTATEGROUPZONEDESCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F4DA0)
#define RPG_GAMECORE_ANIMATORSTATEGROUPZONEDESCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F4C20)

namespace RPG::GameCore
{
	class AnimatorStateGroupZoneDescConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* AnimatorStateNames; // 0x10
		::RPG::GameCore::AnimZoneTransition TransitionType; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::AnimationZone*>* ZoneList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEGROUPZONEDESCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimatorStateGroupZoneDescConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimatorStateGroupZoneDescConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEGROUPZONEDESCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
