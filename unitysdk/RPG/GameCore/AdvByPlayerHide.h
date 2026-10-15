#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByPlayerHide; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYPLAYERHIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D369D80)
#define RPG_GAMECORE_ADVBYPLAYERHIDE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D369F00)
#define RPG_GAMECORE_ADVBYPLAYERHIDE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D369ED0)
#define RPG_GAMECORE_ADVBYPLAYERHIDE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D369D90)
#define RPG_GAMECORE_ADVBYPLAYERHIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D369D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByPlayerHide_TypeDefinitionIndex = 20021;

	class AdvByPlayerHide : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERHIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByPlayerHide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByPlayerHide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERHIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByPlayerHide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByPlayerHide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERHIDE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerHide* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerHide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERHIDE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerHide* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerHide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERHIDE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
