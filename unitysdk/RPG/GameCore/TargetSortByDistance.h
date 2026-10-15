#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetSortByDistance; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYDISTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB42320)
#define RPG_GAMECORE_TARGETSORTBYDISTANCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB424E0)
#define RPG_GAMECORE_TARGETSORTBYDISTANCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB424B0)
#define RPG_GAMECORE_TARGETSORTBYDISTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB42330)
#define RPG_GAMECORE_TARGETSORTBYDISTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB422F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByDistance_TypeDefinitionIndex = 23991;

	class TargetSortByDistance : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetEvaluator* CenterTarget; // 0x10
		::System::Boolean HighestFirst; // 0x18
		::System::Boolean IgnoreYDistance; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDISTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDISTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDISTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDISTANCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDISTANCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
