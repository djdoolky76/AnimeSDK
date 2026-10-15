#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByHasPatrolPath; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYHASPATROLPATH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA77F70)
#define RPG_GAMECORE_ST_BYHASPATROLPATH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA780F0)
#define RPG_GAMECORE_ST_BYHASPATROLPATH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA780C0)
#define RPG_GAMECORE_ST_BYHASPATROLPATH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA77F80)
#define RPG_GAMECORE_ST_BYHASPATROLPATH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA77F40)

namespace RPG::GameCore
{
	class ST_ByHasPatrolPath : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASPATROLPATH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByHasPatrolPath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByHasPatrolPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASPATROLPATH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByHasPatrolPath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByHasPatrolPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASPATROLPATH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasPatrolPath* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasPatrolPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASPATROLPATH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasPatrolPath* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasPatrolPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASPATROLPATH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
