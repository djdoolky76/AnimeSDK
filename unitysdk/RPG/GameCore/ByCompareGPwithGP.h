#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareGPwithGP; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREGPWITHGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D483050)
#define RPG_GAMECORE_BYCOMPAREGPWITHGP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D483260)
#define RPG_GAMECORE_BYCOMPAREGPWITHGP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D483220)
#define RPG_GAMECORE_BYCOMPAREGPWITHGP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D483060)
#define RPG_GAMECORE_BYCOMPAREGPWITHGP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D483010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGPwithGP_TypeDefinitionIndex = 20442;

	class ByCompareGPwithGP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* LeftName; // 0x20
		::RPG::GameCore::DynamicString* RightName; // 0x28
		::RPG::GameCore::CompareType EquationType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGPWITHGP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareGPwithGP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareGPwithGP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGPWITHGP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareGPwithGP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareGPwithGP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGPWITHGP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGPwithGP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGPwithGP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGPWITHGP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGPwithGP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGPwithGP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGPWITHGP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
