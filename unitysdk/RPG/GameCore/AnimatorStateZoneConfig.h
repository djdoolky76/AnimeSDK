#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimatorStateZoneConfig; }
namespace RPG::GameCore { class AnimatorStateZoneRangeConfig; }

#define RPG_GAMECORE_ANIMATORSTATEZONECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F4E80)
#define RPG_GAMECORE_ANIMATORSTATEZONECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F3890)

namespace RPG::GameCore
{
	class AnimatorStateZoneConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AnimatorStateZoneRangeConfig*>* AnimatorStateZoneRangeList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEZONECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimatorStateZoneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimatorStateZoneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEZONECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
