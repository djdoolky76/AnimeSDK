#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckModifierDeathSource; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D494720)
#define RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D494910)
#define RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4948E0)
#define RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D494730)
#define RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4946F0)

namespace RPG::GameCore
{
	class ByCheckModifierDeathSource : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ModifierDeathSource DeathSource; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckModifierDeathSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckModifierDeathSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckModifierDeathSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckModifierDeathSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierDeathSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierDeathSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierDeathSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierDeathSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERDEATHSOURCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
