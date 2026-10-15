#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareFSVwithGP; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREFSVWITHGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AAAA0)
#define RPG_GAMECORE_BYCOMPAREFSVWITHGP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4AACB0)
#define RPG_GAMECORE_BYCOMPAREFSVWITHGP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4AAC70)
#define RPG_GAMECORE_BYCOMPAREFSVWITHGP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4AAAB0)
#define RPG_GAMECORE_BYCOMPAREFSVWITHGP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4AAA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFSVwithGP_TypeDefinitionIndex = 20441;

	class ByCompareFSVwithGP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* LeftName; // 0x20
		::RPG::GameCore::DynamicString* RightName; // 0x28
		::RPG::GameCore::CompareType EquationType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFSVWITHGP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareFSVwithGP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareFSVwithGP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFSVWITHGP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareFSVwithGP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareFSVwithGP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFSVWITHGP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFSVwithGP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFSVwithGP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFSVWITHGP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFSVwithGP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFSVwithGP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFSVWITHGP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
