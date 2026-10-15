#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByEntitiesExist; }
namespace RPG::GameCore { class GroupFetchLocalTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYENTITIESEXIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D394660)
#define RPG_GAMECORE_ADVBYENTITIESEXIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D394260)
#define RPG_GAMECORE_ADVBYENTITIESEXIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D394210)
#define RPG_GAMECORE_ADVBYENTITIESEXIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3940B0)
#define RPG_GAMECORE_ADVBYENTITIESEXIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D394060)

namespace RPG::GameCore
{
	class AdvByEntitiesExist : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GroupFetchLocalTarget* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITIESEXIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByEntitiesExist* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByEntitiesExist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITIESEXIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByEntitiesExist* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByEntitiesExist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITIESEXIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntitiesExist* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntitiesExist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITIESEXIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntitiesExist* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntitiesExist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITIESEXIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
