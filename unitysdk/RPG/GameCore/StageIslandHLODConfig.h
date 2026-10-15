#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class StageIslandHLODConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEISLANDHLODCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB10380)
#define RPG_GAMECORE_STAGEISLANDHLODCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB10390)
#define RPG_GAMECORE_STAGEISLANDHLODCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB10270)

namespace RPG::GameCore
{
	class StageIslandHLODConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* HLODPath; // 0x10
		::RPG::GameCore::HoyoTagContainer* HoyoTag; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEISLANDHLODCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageIslandHLODConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageIslandHLODConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEISLANDHLODCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageIslandHLODConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageIslandHLODConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEISLANDHLODCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
