#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyOverrideType.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtModifierPropertyOverrideData; }

#define RPG_GAMECORE_RTMODIFIERPROPERTYOVERRIDEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA62410)
#define RPG_GAMECORE_RTMODIFIERPROPERTYOVERRIDEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA62260)

namespace RPG::GameCore
{
	class RtModifierPropertyOverrideData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RtModifierPropertyType Property; // 0x10
		::RPG::GameCore::RtModifierPropertyOverrideType OverrideType; // 0x14
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERPROPERTYOVERRIDEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtModifierPropertyOverrideData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtModifierPropertyOverrideData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERPROPERTYOVERRIDEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
