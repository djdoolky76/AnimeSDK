#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsInEraFlipperSpotArea; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72A010)
#define RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E72A1D0)
#define RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E72A1A0)
#define RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E72A020)
#define RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E729FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInEraFlipperSpotArea_TypeDefinitionIndex = 22742;

	class ByIsInEraFlipperSpotArea : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EraStateType EaraState; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
