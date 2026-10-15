#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckIsLimboRevivable; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4906A0)
#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D490820)
#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4907F0)
#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4906B0)
#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D490670)

namespace RPG::GameCore
{
	class ByCheckIsLimboRevivable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckIsLimboRevivable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckIsLimboRevivable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckIsLimboRevivable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckIsLimboRevivable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckIsLimboRevivable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckIsLimboRevivable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckIsLimboRevivable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckIsLimboRevivable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
