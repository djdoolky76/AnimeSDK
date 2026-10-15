#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckBloodLinkDead; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D48C780)
#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D48C900)
#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D48C8D0)
#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D48C790)
#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D48C750)

namespace RPG::GameCore
{
	class ByCheckBloodLinkDead : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckBloodLinkDead* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckBloodLinkDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckBloodLinkDead* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckBloodLinkDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckBloodLinkDead* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckBloodLinkDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckBloodLinkDead* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckBloodLinkDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
