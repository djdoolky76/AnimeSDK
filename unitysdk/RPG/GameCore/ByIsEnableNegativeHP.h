#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsEnableNegativeHP; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISENABLENEGATIVEHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D511770)
#define RPG_GAMECORE_BYISENABLENEGATIVEHP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D511930)
#define RPG_GAMECORE_BYISENABLENEGATIVEHP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D511900)
#define RPG_GAMECORE_BYISENABLENEGATIVEHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D511780)
#define RPG_GAMECORE_BYISENABLENEGATIVEHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D511740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsEnableNegativeHP_TypeDefinitionIndex = 23711;

	class ByIsEnableNegativeHP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENABLENEGATIVEHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsEnableNegativeHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsEnableNegativeHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENABLENEGATIVEHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsEnableNegativeHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsEnableNegativeHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENABLENEGATIVEHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnableNegativeHP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnableNegativeHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENABLENEGATIVEHP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnableNegativeHP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnableNegativeHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENABLENEGATIVEHP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
