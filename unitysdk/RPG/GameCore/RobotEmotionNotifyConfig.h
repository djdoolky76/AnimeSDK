#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RobotEmotionNotifyConfig; }

#define RPG_GAMECORE_ROBOTEMOTIONNOTIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99D020)
#define RPG_GAMECORE_ROBOTEMOTIONNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99CF40)

namespace RPG::GameCore
{
	class RobotEmotionNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 EmotionIndex; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROBOTEMOTIONNOTIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RobotEmotionNotifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RobotEmotionNotifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROBOTEMOTIONNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
