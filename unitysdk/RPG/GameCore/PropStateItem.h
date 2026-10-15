#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropStateItem; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_PROPSTATEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92B9C0)
#define RPG_GAMECORE_PROPSTATEITEM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D92B9D0)
#define RPG_GAMECORE_PROPSTATEITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92B7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateItem_TypeDefinitionIndex = 21203;

	class PropStateItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicString* PropKey; // 0x10
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupPropID; // 0x20
		::RPG::GameCore::PropState TargetState; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStateItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStateItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropStateItem* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropStateItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEITEM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
