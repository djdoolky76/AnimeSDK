#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemPredicateState.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesPredicateItemCondition; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_CHENLINGFESPREDICATEITEMCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79FF70)
#define RPG_GAMECORE_CHENLINGFESPREDICATEITEMCONDITION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E79FF80)
#define RPG_GAMECORE_CHENLINGFESPREDICATEITEMCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E79FE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesPredicateItemCondition_TypeDefinitionIndex = 21860;

	class ChenLingFesPredicateItemCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingFesItemPredicateState PredicateState; // 0x10
		::System::UInt32 ItemID; // 0x14
		::System::UInt32 TagID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESPREDICATEITEMCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesPredicateItemCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesPredicateItemCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESPREDICATEITEMCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ChenLingFesPredicateItemCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ChenLingFesPredicateItemCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESPREDICATEITEMCONDITION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
