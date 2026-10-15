#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByRegionEraState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYREGIONERASTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5071C0)
#define RPG_GAMECORE_BYREGIONERASTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D507380)
#define RPG_GAMECORE_BYREGIONERASTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D507350)
#define RPG_GAMECORE_BYREGIONERASTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5071D0)
#define RPG_GAMECORE_BYREGIONERASTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D507190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRegionEraState_TypeDefinitionIndex = 22332;

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
