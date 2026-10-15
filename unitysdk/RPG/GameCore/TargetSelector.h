#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetSelector; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB405C0)
#define RPG_GAMECORE_TARGETSELECTOR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB40760)
#define RPG_GAMECORE_TARGETSELECTOR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB40710)
#define RPG_GAMECORE_TARGETSELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB405D0)
#define RPG_GAMECORE_TARGETSELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB40570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSelector_TypeDefinitionIndex = 23898;

	class TargetSelector : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x10
		::RPG::GameCore::TargetEvaluator* SuccTarget; // 0x18
		::RPG::GameCore::TargetEvaluator* FailTarget; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSelector* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSelector* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
