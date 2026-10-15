#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ValuePostProcessConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC8DA20)
#define RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC8DA10)
#define RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC8D2C0)
#define RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC8D260)
#define RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC8CCE0)

namespace RPG::GameCore
{
	class ValuePostProcessConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ValuePostProcessConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ValuePostProcessConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ValuePostProcessConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ValuePostProcessConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValuePostProcessConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValuePostProcessConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValuePostProcessConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValuePostProcessConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEPOSTPROCESSCONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
