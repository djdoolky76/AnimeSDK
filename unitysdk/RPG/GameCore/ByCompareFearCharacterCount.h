#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareFearCharacterCount; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREFEARCHARACTERCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AB2D0)
#define RPG_GAMECORE_BYCOMPAREFEARCHARACTERCOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4AB540)
#define RPG_GAMECORE_BYCOMPAREFEARCHARACTERCOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4AB510)
#define RPG_GAMECORE_BYCOMPAREFEARCHARACTERCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4AB2E0)
#define RPG_GAMECORE_BYCOMPAREFEARCHARACTERCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4AB2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFearCharacterCount_TypeDefinitionIndex = 20247;

	class ByCompareFearCharacterCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFEARCHARACTERCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareFearCharacterCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareFearCharacterCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFEARCHARACTERCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareFearCharacterCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareFearCharacterCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFEARCHARACTERCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFearCharacterCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFearCharacterCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFEARCHARACTERCOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFearCharacterCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFearCharacterCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFEARCHARACTERCOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
