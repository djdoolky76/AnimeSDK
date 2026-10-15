#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MainMissionPartialInfoConfig; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_MAINMISSIONPARTIALINFOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FB4A0)
#define RPG_GAMECORE_MAINMISSIONPARTIALINFOCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D7FB4B0)
#define RPG_GAMECORE_MAINMISSIONPARTIALINFOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7FB3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionPartialInfoConfig_TypeDefinitionIndex = 19022;

	class MainMissionPartialInfoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SubMissionInfoConfig*>* SubMissionList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPARTIALINFOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MainMissionPartialInfoConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MainMissionPartialInfoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPARTIALINFOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MainMissionPartialInfoConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MainMissionPartialInfoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPARTIALINFOCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
