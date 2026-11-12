#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByDeployPuzzleBasePointIsAnswer; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FF5B0)
#define RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E6FF7B0)
#define RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E6FF760)
#define RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6FF5E0)
#define RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6FF560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDeployPuzzleBasePointIsAnswer_TypeDefinitionIndex = 22372;

	class ByDeployPuzzleBasePointIsAnswer : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
