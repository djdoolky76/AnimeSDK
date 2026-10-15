#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByLocalPlayerIsHero; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYLOCALPLAYERISHERO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D52B3C0)
#define RPG_GAMECORE_BYLOCALPLAYERISHERO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D52B540)
#define RPG_GAMECORE_BYLOCALPLAYERISHERO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D52B510)
#define RPG_GAMECORE_BYLOCALPLAYERISHERO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D52B3D0)
#define RPG_GAMECORE_BYLOCALPLAYERISHERO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D52B390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByLocalPlayerIsHero_TypeDefinitionIndex = 20589;

	class ByLocalPlayerIsHero : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISHERO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByLocalPlayerIsHero* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByLocalPlayerIsHero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISHERO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByLocalPlayerIsHero* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByLocalPlayerIsHero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISHERO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsHero* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsHero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISHERO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsHero* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsHero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISHERO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
