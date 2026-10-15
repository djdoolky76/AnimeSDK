#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelHoyoTagOverrideMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelEntityHoyoTagContainerOverrideConfig; }

#define RPG_GAMECORE_LEVELENTITYHOYOTAGCONTAINEROVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7ABD90)
#define RPG_GAMECORE_LEVELENTITYHOYOTAGCONTAINEROVERRIDECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7ABC50)

namespace RPG::GameCore
{
	class LevelEntityHoyoTagContainerOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelHoyoTagOverrideMode Mode; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::HoyoTagContainer* OverrideTags; // 0x18
		::RPG::GameCore::HoyoTagContainer* AdditiveTags; // 0x20
		::RPG::GameCore::HoyoTagContainer* SubtractiveTags; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYHOYOTAGCONTAINEROVERRIDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelEntityHoyoTagContainerOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelEntityHoyoTagContainerOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYHOYOTAGCONTAINEROVERRIDECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
