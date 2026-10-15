#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IslandStateConditionSet; }
namespace RPG::GameCore { class IslandStateSavedValueCondition; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ISLANDSTATECONDITIONSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D75FB20)
#define RPG_GAMECORE_ISLANDSTATECONDITIONSET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D75FB30)
#define RPG_GAMECORE_ISLANDSTATECONDITIONSET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D75F9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IslandStateConditionSet_TypeDefinitionIndex = 19134;

	class IslandStateConditionSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::IslandStateSavedValueCondition*>* Conditions; // 0x10
		::RPG::GameCore::LogicOperationType Operation; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISLANDSTATECONDITIONSET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::IslandStateConditionSet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IslandStateConditionSet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISLANDSTATECONDITIONSET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IslandStateConditionSet* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IslandStateConditionSet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISLANDSTATECONDITIONSET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
