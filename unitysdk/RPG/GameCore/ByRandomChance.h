#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByRandomChance; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYRANDOMCHANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D532EE0)
#define RPG_GAMECORE_BYRANDOMCHANCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D533100)
#define RPG_GAMECORE_BYRANDOMCHANCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5330D0)
#define RPG_GAMECORE_BYRANDOMCHANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D532EF0)
#define RPG_GAMECORE_BYRANDOMCHANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D532EB0)

namespace RPG::GameCore
{
	class ByRandomChance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Chance; // 0x20
		::System::String* LogComment; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByRandomChance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByRandomChance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByRandomChance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByRandomChance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
