#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareEnhancedID; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREENHANCEDID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A83E0)
#define RPG_GAMECORE_BYCOMPAREENHANCEDID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4A8600)
#define RPG_GAMECORE_BYCOMPAREENHANCEDID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4A85D0)
#define RPG_GAMECORE_BYCOMPAREENHANCEDID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A83F0)
#define RPG_GAMECORE_BYCOMPAREENHANCEDID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A83B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareEnhancedID_TypeDefinitionIndex = 22552;

	class ByCompareEnhancedID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetEnhancedID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENHANCEDID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareEnhancedID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareEnhancedID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENHANCEDID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareEnhancedID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareEnhancedID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENHANCEDID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnhancedID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnhancedID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENHANCEDID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnhancedID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnhancedID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENHANCEDID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
