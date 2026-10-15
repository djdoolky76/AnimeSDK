#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SubMissionRelationConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_SUBMISSIONRELATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB36D80)
#define RPG_GAMECORE_SUBMISSIONRELATIONCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB36D90)
#define RPG_GAMECORE_SUBMISSIONRELATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB36C70)

namespace RPG::GameCore
{
	class SubMissionRelationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MonitorSubMissionID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* MonitoredSubMissionIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONRELATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SubMissionRelationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SubMissionRelationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONRELATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubMissionRelationConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubMissionRelationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONRELATIONCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
