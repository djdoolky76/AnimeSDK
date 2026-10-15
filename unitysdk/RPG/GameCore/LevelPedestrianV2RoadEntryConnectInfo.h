#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryConnectInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYCONNECTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C9080)
#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYCONNECTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C8FC0)

namespace RPG::GameCore
{
	class LevelPedestrianV2RoadEntryConnectInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::MVector3>* ConnectPoints; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYCONNECTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2RoadEntryConnectInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2RoadEntryConnectInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYCONNECTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
