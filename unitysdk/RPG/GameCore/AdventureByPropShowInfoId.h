#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByPropShowInfoId; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C2CD0)
#define RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3C2ED0)
#define RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3C2E90)
#define RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3C2CE0)
#define RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C2C90)

namespace RPG::GameCore
{
	class AdventureByPropShowInfoId : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 TextureID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByPropShowInfoId* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByPropShowInfoId*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByPropShowInfoId* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByPropShowInfoId*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPropShowInfoId* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPropShowInfoId*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPropShowInfoId* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPropShowInfoId*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
