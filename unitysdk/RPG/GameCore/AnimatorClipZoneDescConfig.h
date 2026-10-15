#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimationZone; }
namespace RPG::GameCore { class AnimatorClipZoneDescConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMATORCLIPZONEDESCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F49C0)
#define RPG_GAMECORE_ANIMATORCLIPZONEDESCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F4870)

namespace RPG::GameCore
{
	class AnimatorClipZoneDescConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ClipName; // 0x10
		::Il2CppArray<::RPG::GameCore::AnimationZone*>* ZoneList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORCLIPZONEDESCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimatorClipZoneDescConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimatorClipZoneDescConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORCLIPZONEDESCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
