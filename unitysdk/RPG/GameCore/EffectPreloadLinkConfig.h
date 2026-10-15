#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectPreloadLinkConfig; }
namespace System { class String; }

#define RPG_GAMECORE_EFFECTPRELOADLINKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D631420)
#define RPG_GAMECORE_EFFECTPRELOADLINKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D631310)

namespace RPG::GameCore
{
	class EffectPreloadLinkConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Target; // 0x10
		::System::String* ItemName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTPRELOADLINKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EffectPreloadLinkConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EffectPreloadLinkConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTPRELOADLINKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
