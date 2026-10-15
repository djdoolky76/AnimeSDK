#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ST_AlertLevel.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RA_ByAlertLevel; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RA_BYALERTLEVEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9628A0)
#define RPG_GAMECORE_RA_BYALERTLEVEL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D962A60)
#define RPG_GAMECORE_RA_BYALERTLEVEL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D962A30)
#define RPG_GAMECORE_RA_BYALERTLEVEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9628B0)
#define RPG_GAMECORE_RA_BYALERTLEVEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D962870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByAlertLevel_TypeDefinitionIndex = 20047;

	class RA_ByAlertLevel : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ST_AlertLevel AlertLevel; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYALERTLEVEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RA_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RA_ByAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYALERTLEVEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RA_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RA_ByAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYALERTLEVEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYALERTLEVEL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYALERTLEVEL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
