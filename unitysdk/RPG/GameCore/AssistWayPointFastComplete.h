#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistWayPointFastComplete; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTFASTCOMPLETE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FD5E0)
#define RPG_GAMECORE_ASSISTWAYPOINTFASTCOMPLETE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3FD5F0)
#define RPG_GAMECORE_ASSISTWAYPOINTFASTCOMPLETE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3FD3F0)

namespace RPG::GameCore
{
	class AssistWayPointFastComplete : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StartIndex; // 0x10
		::System::UInt32 EndIndex; // 0x14
		::System::Boolean UseOverrideTriggerTime; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single TriggerTime; // 0x1C
		::System::UInt32 TeleportTargetID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTFASTCOMPLETE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointFastComplete* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointFastComplete*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTFASTCOMPLETE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointFastComplete* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointFastComplete*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTFASTCOMPLETE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
