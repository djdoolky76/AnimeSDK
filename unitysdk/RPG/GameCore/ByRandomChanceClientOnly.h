#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByRandomChanceClientOnly; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D533660)
#define RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D533880)
#define RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D533850)
#define RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D533670)
#define RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D533630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRandomChanceClientOnly_TypeDefinitionIndex = 22989;

	class ByRandomChanceClientOnly : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Chance; // 0x20
		::System::String* LogComment; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByRandomChanceClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByRandomChanceClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByRandomChanceClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByRandomChanceClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChanceClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChanceClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChanceClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChanceClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
