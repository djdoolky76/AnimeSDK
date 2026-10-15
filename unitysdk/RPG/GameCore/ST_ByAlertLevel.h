#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ST_AlertLevel.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByAlertLevel; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYALERTLEVEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA43C20)
#define RPG_GAMECORE_ST_BYALERTLEVEL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA43DE0)
#define RPG_GAMECORE_ST_BYALERTLEVEL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA43DB0)
#define RPG_GAMECORE_ST_BYALERTLEVEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA43C30)
#define RPG_GAMECORE_ST_BYALERTLEVEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA43BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByAlertLevel_TypeDefinitionIndex = 20070;

	class ST_ByAlertLevel : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ST_AlertLevel AlertLevel; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYALERTLEVEL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
