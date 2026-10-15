#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtDirSourceType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtDirConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTDIRCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5CD80)
#define RPG_GAMECORE_RTDIRCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA5CDF0)
#define RPG_GAMECORE_RTDIRCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5CB50)

namespace RPG::GameCore
{
	class RtDirConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RtDirSourceType DirSource; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType2; // 0x20
		::RPG::GameCore::DynamicFloat* YawOffset; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDIRCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtDirConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtDirConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDIRCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtDirConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtDirConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDIRCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
