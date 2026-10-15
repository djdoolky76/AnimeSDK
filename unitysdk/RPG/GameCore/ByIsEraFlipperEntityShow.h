#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsEraFlipperEntityShow; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D512A10)
#define RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D512B90)
#define RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D512B60)
#define RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D512A20)
#define RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5129E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsEraFlipperEntityShow_TypeDefinitionIndex = 22334;

	class ByIsEraFlipperEntityShow : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsEraFlipperEntityShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsEraFlipperEntityShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEraFlipperEntityShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEraFlipperEntityShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
