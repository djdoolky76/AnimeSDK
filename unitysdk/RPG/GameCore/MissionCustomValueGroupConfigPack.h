#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionCustomValueGroupConfig; }
namespace RPG::GameCore { class MissionCustomValueGroupConfigPack; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIGPACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D885A00)
#define RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIGPACK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D885A10)
#define RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIGPACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D885940)

namespace RPG::GameCore
{
	class MissionCustomValueGroupConfigPack : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MissionCustomValueGroupConfig*>* ConfigPackList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIGPACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionCustomValueGroupConfigPack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionCustomValueGroupConfigPack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIGPACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueGroupConfigPack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueGroupConfigPack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIGPACK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
