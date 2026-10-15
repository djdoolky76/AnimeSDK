#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByInAttackDistance; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYINATTACKDISTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA79430)
#define RPG_GAMECORE_ST_BYINATTACKDISTANCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA795B0)
#define RPG_GAMECORE_ST_BYINATTACKDISTANCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA79580)
#define RPG_GAMECORE_ST_BYINATTACKDISTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA79440)
#define RPG_GAMECORE_ST_BYINATTACKDISTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA79400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByInAttackDistance_TypeDefinitionIndex = 20075;

	class ST_ByInAttackDistance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByInAttackDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByInAttackDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByInAttackDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByInAttackDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINATTACKDISTANCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
