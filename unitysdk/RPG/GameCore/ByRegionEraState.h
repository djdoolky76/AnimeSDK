#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByRegionEraState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYREGIONERASTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D534C30)
#define RPG_GAMECORE_BYREGIONERASTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D534DF0)
#define RPG_GAMECORE_BYREGIONERASTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D534DC0)
#define RPG_GAMECORE_BYREGIONERASTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D534C40)
#define RPG_GAMECORE_BYREGIONERASTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D534C00)

namespace RPG::GameCore
{
	class ByRegionEraState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EraStateType EaraState; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByRegionEraState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByRegionEraState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByRegionEraState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByRegionEraState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRegionEraState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRegionEraState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRegionEraState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRegionEraState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
